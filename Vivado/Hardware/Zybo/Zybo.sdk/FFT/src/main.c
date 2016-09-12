/*******************************************************************************/
/*                                H E A D E R                                  */
/*******************************************************************************/
// File Name            : main.c
// Author               : Daniel Kampert
// Modified by          :
// Processor            : ARM Cortex-A9
// Evaluation Board     : Zybo
// Date                 : 25-12-2014

/*******************************************************************************/
/*                     U P D A T E   I N F O R M A T I O N                     */
/*******************************************************************************/

// Date             Changes
// -----------------------------------------------------------------------------
//

/*******************************************************************************/
/*                             I N C L U D E S                                 */
/*******************************************************************************/

#include "main.h"

/*******************************************************************************/
/*                                   M A I N                                   */
/*******************************************************************************/

int main (void)
{
	printf("\n");
	FFT_Config = (1 << 17);
	printf("Initialisiere GIC-Controller...\n");
	Interrupt_Enable(GIC_0);
	printf("Interrupt-Controller initialisiert!\n");

	printf("Initialisiere GPIO...\n");
	XGpio_Initialize(&GPIO, IO_0);
	XGpio_Initialize(&LED, IO_1);
	XGpio_InterruptEnable(&GPIO, GPIO_CHANNEL_1_INT | GPIO_CHANNEL_2_INT);
	XGpio_InterruptGlobalEnable(&GPIO);
	Setup_Interrupt(IO_0_INT, GPIO_Handler, &GPIO, 0xA0, 0x3);
	printf("GPIO initialisiert!\n");

	printf("Initialisiere XADC...\n");
	Setup_XADC(XADC_0);
	printf("XADC initialisiert!\n");

	printf("Initialisiere FFT...\n");
	FFT_FIFO_Init(FIFO_0, FIFO_1);
	printf("FFT initialisiert!\n");

	printf("Aktiviere System-Interrupts...\n");
	Activate_Interrupts();
	printf("System-Interrupts aktiviert!\n");

	printf("Initialisiere VGA-Controller...\n");
	VGAInit();
	printf("VGA-Controller initialisiert!\n");

	printf("Konfiguration abgeschlossen!\n");
	printf("-------------------\n");

	VGAWriteString("Hallo Welt\n", 3, 0x001F);

	//printf("Initialisiere DMA...\n");
	//FFT_DMA_Init(DMA_0);
	//printf("DMA initialisiert!\n");

	printf("Sende FFT Konfiguration...\n");
	FFT_FIFO_SendConfig(&Fifo_1, &FFT_Config);
	printf("Konfiguration abgeschlossen!\n");

	printf("\n");
	printf("--Lets go...--\n");
	printf("Generating Sample...\n");

	for(Zaehler = 0; Zaehler < FFT_LENGTH * 2; Zaehler = Zaehler + 2)
	{
		SendBuffer[Zaehler] = sin(2 * M_PI * Zaehler / (2 * FFT_LENGTH));
		SendBuffer[Zaehler + 1] = 0.0;
	}

	FFT_FIFO_RunInt(&Fifo_0, (u32 *)SendBuffer, FFT_LENGTH);
	while(Send_Complete != 1);
	ReceiveBuffer = (float *)DestinationBuffer;

	FFT_PrintResult();

	/*printf("Starte DMA-Transfer...\n");
	DMA_Transfer((u32 *)SendBuffer, (u32 *)ReceiveBuffer, 2 * FFT_LENGTH);
	printf("Transfer abgeschlossen\n");*/

	while(1)
	{
		printf("XADCPS_CH_VREFP: %f\n\r", XAdcPs_RawToVoltage(XAdcPs_GetAdcData(&XADC, XADCPS_CH_VREFP)));
		printf("XADCPS_CH_VREFM: %f\n\r", XAdcPs_RawToVoltage(XAdcPs_GetAdcData(&XADC, XADCPS_CH_VREFN)));

		ADC_Raw_Data = XAdcPs_GetAdcData(&XADC, (XADCPS_CH_AUX_MAX - 1));
		printf("Temperatur: %f\n\r", XAdcPs_RawToTemperature(XAdcPs_GetAdcData(&XADC, XADCPS_CH_TEMP)));
		ADC_Raw_Data = XAdcPs_GetAdcData(&XADC, (XADCPS_CH_AUX_MAX - 1));
		printf("ADC: %u\n", ADC_Raw_Data);
		sleep(1);
	}

	return 0;
}