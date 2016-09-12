#include "DMA.h"

int DMA_Init(u32 Device_ID, u32 *TxBufferPtr, u32 *RxBufferPtr)
{
	DMA_Config = XAxiDma_LookupConfig(Device_ID);
	if (!DMA_Config)
	{
		xil_printf("Keine Konfiguration f�r %d gefunden!\r\n", Device_ID);
		return XST_FAILURE;
	}

	DMA_Status = XAxiDma_CfgInitialize(&DMA, DMA_Config);
	if (DMA_Status != XST_SUCCESS)
	{
		xil_printf("Initialisierung fehlgeschlagen: %d\r\n", DMA_Status);
		return XST_FAILURE;
	}

	if(XAxiDma_HasSg(&DMA))
	{
		xil_printf("Ger�t in SG Mode konfiguriert!\r\n");
		return XST_FAILURE;
	}

	XAxiDma_IntrDisable(&DMA, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
	XAxiDma_IntrDisable(&DMA, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);

	TxBufferPtr = (u32 *)TX_BUFFER_BASE;
	RxBufferPtr = (u32 *)RX_BUFFER_BASE;

	return XST_SUCCESS;
}

void DMA_EnableInt(void)
{
	XAxiDma_IntrEnable(&DMA, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
	XAxiDma_IntrEnable(&DMA, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
}

void DMA_DisableInt(void)
{

}

// Start a DMA Transfer
// TxBufferPtr -> Pointer to Transmit Buffer
// RxBufferPtr -> Pointer to Receive Buffer
// Length -> Packages which has to be send (1 Package = 4 Byte)
int DMA_Transfer(u32 *TxBufferPtr, u32 *RxBufferPtr, u32 Length)
{
	// Flush cache
	Xil_DCacheFlushRange((u32)TxBufferPtr, Length * 4);

	DMA_Status = XAxiDma_SimpleTransfer(&DMA, (u32)RxBufferPtr, Length * 4, XAXIDMA_DEVICE_TO_DMA);

	if (DMA_Status != XST_SUCCESS)
	{
		xil_printf("ERROR! Konnte S2MM Transfer nicht starten!\n\r");
		xil_printf("Error: %d\n\r", DMA_Status);
		return XST_FAILURE;
	}

	DMA_Status = XAxiDma_SimpleTransfer(&DMA, (u32)TxBufferPtr, Length * 4, XAXIDMA_DMA_TO_DEVICE);

	if (DMA_Status != XST_SUCCESS)
	{
		xil_printf("ERROR! Konnte MM2S Transfer nicht starten!\n\r");
		xil_printf("Error: %d\n\r", DMA_Status);
		return XST_FAILURE;
	}

	while ((XAxiDma_Busy(&DMA, XAXIDMA_DEVICE_TO_DMA)) || (XAxiDma_Busy(&DMA, XAXIDMA_DMA_TO_DEVICE)));

	return XST_SUCCESS;
}

int DMA_GetData(int *RxBufferPtr, int Length)
{
	RxBufferPtr = (u32 *)RX_BUFFER_BASE;
	Xil_DCacheInvalidateRange((u32)RxBufferPtr, Length * 4);
}