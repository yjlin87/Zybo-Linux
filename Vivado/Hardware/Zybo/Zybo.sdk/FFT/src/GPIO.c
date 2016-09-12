#include "GPIO.h"

void GPIO_Handler(void *CallbackRef)
{
	XGpio *GpioPtr = (XGpio *)CallbackRef;

	if ((XGpio_InterruptGetStatus(GpioPtr) & GPIO_CHANNEL_1_INT) == GPIO_CHANNEL_1_INT)
	{
		printf("Button Interrupt\n");
	}
	else if ((XGpio_InterruptGetStatus(GpioPtr) & GPIO_CHANNEL_2_INT) == GPIO_CHANNEL_2_INT)
	{
		printf("Switch Interrupt\n");
	}

	XGpio_InterruptDisable(GpioPtr, GPIO_CHANNEL_1_INT | GPIO_CHANNEL_2_INT);
	XGpio_InterruptClear(GpioPtr, GPIO_CHANNEL_1_INT | GPIO_CHANNEL_2_INT);
	XGpio_InterruptEnable(GpioPtr, GPIO_CHANNEL_1_INT | GPIO_CHANNEL_2_INT);
}
