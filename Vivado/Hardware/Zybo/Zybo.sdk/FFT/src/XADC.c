#include "XADC.h"

int Setup_XADC(u32 ID)
{
	XADC_Config = XAdcPs_LookupConfig(ID);

	if(XADC_Config == NULL)
	{
		return XST_FAILURE;
	}

	XAdcPs_CfgInitialize(&XADC, XADC_Config, XADC_Config->BaseAddress);

	XADC_Status = XAdcPs_SelfTest(&XADC);
	if(XADC_Status != XST_SUCCESS)
	{
		return XST_FAILURE;
	}

	return XST_SUCCESS;
}


void XADC_Handler(void *CallBackRef)
{
	u32 Interrupt_Register;
	XAdcPs *XAdcPtr = (XAdcPs *)CallBackRef;

	Interrupt_Register = XAdcPs_IntrGetStatus(XAdcPtr);

	if(Interrupt_Register & XADCPS_INTX_ALM0_MASK)
	{
		printf("Temperatur Interrupt");
		XAdcPs_IntrDisable(XAdcPtr, XADCPS_INTX_ALM0_MASK);

	}
	else if(Interrupt_Register & XADCPS_INTX_ALM5_MASK)
	{
		printf("Vccpaux Interrupt\n");
		XAdcPs_IntrDisable(XAdcPtr, XADCPS_INTX_ALM5_MASK);
	}

	XAdcPs_IntrClear(XAdcPtr, Interrupt_Register);
}
