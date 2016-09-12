#include "Interrupt.h"

int Interrupt_Enable(u32 ID)
{
	Interrupt_Config = XScuGic_LookupConfig(ID);

	Interrupt_Status = XScuGic_CfgInitialize(&Interrupt, Interrupt_Config, Interrupt_Config->CpuBaseAddress);
	if (Interrupt_Status != XST_SUCCESS)
	{
		xil_printf("Initialization of GIC failed!\r\n");
		xil_printf("Error Code: %d\n\r", Interrupt_Status);
		return XST_FAILURE;
	}

	return XST_SUCCESS;
}

int Setup_Interrupt(u16 Int_ID, Xil_InterruptHandler Handler, void *CallBack_Ref, u8 Priority, u8 Trigger)
{
	XScuGic_SetPriorityTriggerType(&Interrupt, Int_ID, Priority, Trigger);

	Interrupt_Status = XScuGic_Connect(&Interrupt, Int_ID, Handler, CallBack_Ref);
	if (Interrupt_Status != XST_SUCCESS)
	{
		xil_printf("ERROR! Failed to connect Handler to the interrupt controller!\r\n");
		xil_printf("Error Code: %d\n\r", Interrupt_Status);
		return XST_FAILURE;
	}

	XScuGic_Enable(&Interrupt, Int_ID);

	return XST_SUCCESS;
}

void Activate_Interrupts(void)
{
	Xil_ExceptionInit();
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT, (Xil_ExceptionHandler)XScuGic_InterruptHandler, &Interrupt);
	Xil_ExceptionEnable();
}

void Delete_Interrupt(u16 Int_ID)
{
	XScuGic_Disable(&Interrupt, Int_ID);
	XScuGic_Disconnect(&Interrupt, Int_ID);
}
