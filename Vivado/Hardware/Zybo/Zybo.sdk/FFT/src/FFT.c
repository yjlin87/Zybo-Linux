#include "FFT.h"

int FFT_DMA_Init(u32 DMA_ID)
{
	return DMA_Init(DMA_ID, SendBuffer, ReceiveBuffer);
}

int FFT_FIFO_Init(u32 Data_FIFO, u32 Config_FIFO)
{
	if(Setup_Fifo(&Fifo_0, FIFO_0) != XST_SUCCESS)
	{
		return FIFO_DATA_ERROR;
	}

	if(Setup_Fifo(&Fifo_1, FIFO_1) != XST_SUCCESS)
	{
		return FIFO_CONFIG_ERROR;
	}

	printf("Aktiviere Daten-FIFO Interrupt...\n");
	FIFO_EnableInt(&Fifo_0, XLLF_INT_ALL_MASK);
	Setup_Interrupt(FIFO_0_INT, FIFO_0_Handler, &Fifo_0, 0xA0, 0x3);;
	printf("Daten-FIFO Interrupt aktiviert!\n");

	return FIFO_CHECKED;
}

int FFT_FIFO_Run(XLlFifo *Fifo, u32 *Quelle, u32 *Ziel, u32 Anzahl)
{
	int Paket;
	int Length = Anzahl * 2;

	printf("Compute FFT...\n");

	for(Paket = 0; Paket < Length; Paket++)
	{
		// Daten in den FIFO kopieren
		FIFO_SendToBuffer(Fifo, *(Quelle + Paket));
	}

	FIFO_SendData(Fifo, Length, 0);
	usleep(100);

	return FIFO_ReadData(Fifo, Ziel);
}

void FFT_FIFO_RunInt(XLlFifo *Fifo, u32 *Quelle, u32 Anzahl)
{
	int Paket;
	int Length = Anzahl * 2;

	printf("Compute FFT...\n");

	for(Paket = 0; Paket < Length; Paket++)
	{
		// Daten in den FIFO kopieren
		FIFO_SendToBuffer(Fifo, *(Quelle + Paket));
	}

	FIFO_SendData(Fifo, Length, 1);
}

void FFT_FIFO_SendConfig(XLlFifo *Fifo, u32 *Quelle)
{
	printf("Write FIFO Config: %i\n", *Quelle);

	FIFO_SendToBuffer(Fifo, *Quelle);
	FIFO_SendData(Fifo, 1, 0);
}

void FFT_GPIO_WriteConfig(u32 *Config)
{
	printf("Write Config: %i\n", *Config);

	// Set TVALID to high
	XGpio_DiscreteWrite(&FFT_GPIO, TVALID_CHANNEL, 1);

	// Write TDATA to FFT-Core
	XGpio_DiscreteWrite(&FFT_GPIO, TDATA_CHANNEL, *Config);

	// Set TVALID to low
	XGpio_DiscreteWrite(&FFT_GPIO, TVALID_CHANNEL, 0);
}

void FFT_PrintResult()
{
	int Zaehler = 0;
	for(Zaehler = 0; Zaehler < FFT_LENGTH * 2; Zaehler = Zaehler + 2)
	{
		printf("--------\n");
		printf("Paket: %i\n", Zaehler / 2);
		printf("Real: %f\n",  ReceiveBuffer[Zaehler]);
		printf("Imaginaer: %f\n",  ReceiveBuffer[Zaehler + 1]);
	}
}
