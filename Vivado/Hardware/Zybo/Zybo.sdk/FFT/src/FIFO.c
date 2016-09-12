#include "FIFO.h"

int Setup_Fifo(XLlFifo *Fifo, u32 ID)
{
	return XLlFifo_CfgInitialize(Fifo, XLlFfio_LookupConfig(ID), XLlFfio_LookupConfig(ID)->BaseAddress);
}

void FIFO_SendToBuffer(XLlFifo *Fifo, u32 Quelle)
{
	if(XLlFifo_iTxVacancy(Fifo))
	{
		XLlFifo_TxPutWord(Fifo, Quelle);
	}
}

void FIFO_SendData(XLlFifo *Fifo, u32 Anzahl, u32 Interrupt)
{
	// Uebertragung starten
	XLlFifo_iTxSetLen(Fifo, Anzahl * PAKET_WIDTH);

	if(Interrupt == 0)
	{
		// Warten bis Uebertragung beendet ist
		while(!(XLlFifo_IsTxDone(Fifo)));
	}
}

int FIFO_EnableInt(XLlFifo *Fifo, u32 Mask)
{
	XLlFifo_IntEnable(Fifo, Mask);

	Fifo_Status = XLlFifo_Status(Fifo);
	XLlFifo_IntClear(Fifo, 0xffffffff);
	Fifo_Status = XLlFifo_Status(Fifo);
	if(Fifo_Status != 0x0)
	{
		xil_printf("\n ERROR : Reset Value: 0x%x\t"
				"Erwartet: 0x0\n\r", XLlFifo_Status(&Fifo_0));
		return XST_FAILURE;
	}

	return XST_SUCCESS;
}

void FIFO_DisableInt(XLlFifo *Fifo, u32 Mask)
{
	XLlFifo_IntDisable(Fifo, Mask);
}

int FIFO_ReadData(XLlFifo *Fifo, u32 *Ziel)
{
	int Laenge = 0;
	int Byte = 0;

	Laenge = XLlFifo_iRxGetLen(Fifo) / PAKET_WIDTH;

	for(Byte = 0; Byte < Laenge; Byte++)
	{
		Ziel[Byte] = XLlFifo_RxGetWord(Fifo);
	}

	return Laenge;
}

/****************************************************************************/
/*						Interrupt-Handler									*/
/****************************************************************************/

void FIFO_0_Handler(void *CallbackRef)
{
	u32 Interrupt_Register;
	XLlFifo *Reference = (XLlFifo *)CallbackRef;

	Interrupt_Register = XLlFifo_IntPending(Reference);
	while(Interrupt_Register)
	{
		if(Interrupt_Register & XLLF_INT_RC_MASK)
		{
			xil_printf("Daten gesendet...\n\r");
			FIFO_ReceiveComplete(Reference);
			XLlFifo_IntClear(Reference, XLLF_INT_RC_MASK);
		}
		else if(Interrupt_Register & XLLF_INT_TC_MASK)
		{
			xil_printf("Daten empfangen...\n\r");
			FIFO_SendComplete(Reference);
		}
		else if(Interrupt_Register & XLLF_INT_ERROR_MASK)
		{
			xil_printf("Error!\n\r");
			FIFO_GetError(Reference, Interrupt_Register);
			XLlFifo_IntClear(Reference, XLLF_INT_ERROR_MASK);
		}
		else
		{
			XLlFifo_IntClear(Reference, Interrupt_Register);
		}
		Interrupt_Register = XLlFifo_IntPending(Reference);
	}
}

void FIFO_SendComplete(XLlFifo *Fifo)
{
	XLlFifo_IntClear(Fifo, XLLF_INT_TC_MASK);

	Send_Complete = 1;
}

void FIFO_ReceiveComplete(XLlFifo *Fifo)
{
	FIFO_ReadData(Fifo, DestinationBuffer);
}

void FIFO_GetError(XLlFifo *Fifo, u32 Interrupt_Register)
{
	if(Interrupt_Register & XLLF_INT_RPURE_MASK)
	{
		XLlFifo_RxReset(Fifo);
	}
	else if(Interrupt_Register & XLLF_INT_RPORE_MASK)
	{
		XLlFifo_RxReset(Fifo);
	}
	else if(Interrupt_Register & XLLF_INT_RPUE_MASK)
	{
		XLlFifo_RxReset(Fifo);
	}
	else if(Interrupt_Register & XLLF_INT_TPOE_MASK)
	{
		XLlFifo_TxReset(Fifo);
	}
	else if(Interrupt_Register & XLLF_INT_TSE_MASK)
	{
	}

	Error++;
}
