#include "AXI_Timer/Include/AXI_Timer.h"

int Timer_Init(Timer_t *Timer)
{
    void *Map = NULL;
	int Memory = open("/dev/mem", O_RDWR | O_SYNC);

	if(Memory < 0)
	{
		printf("Unable to open /dev/mem!\n");
		return -1;
	}

	Map = mmap(
		NULL,
		4096,
		PROT_READ | PROT_WRITE,
		MAP_SHARED,
		Memory,
		Timer->Baseaddress
	);

	if(Map < 0)
	{
		printf("Error during mapping!\n");
		return -1;
	}

    Timer->Mapping = (volatile unsigned int *)Map;

	return 0;
}

void Timer_SoftReset(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) = 0x00;
    *(Timer->Mapping + TIMER1_CONTROL) = 0x00;

    *(Timer->Mapping + TIMER0_LOAD) = 0x00;
    *(Timer->Mapping + TIMER1_LOAD) = 0x00;

    *(Timer->Mapping + TIMER0_COUNTER) = 0x00;
    *(Timer->Mapping + TIMER1_COUNTER) = 0x00;
}

void Timer_Enable(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) |= (1 << TIMER_ENABLE);

    if(Timer->IsDual)
    {
        *(Timer->Mapping + TIMER1_CONTROL) |= (1 << TIMER_ENABLE);
    }
}

void Timer_Disable(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) &= ~(1 << TIMER_ENABLE);

    if(Timer->IsDual)
    {
        *(Timer->Mapping + TIMER1_CONTROL) &= ~(1 << TIMER_ENABLE);
    }
}

void PWM_Enable(Timer_t *Timer)
{
    Timer->IsDual = true;

    *(Timer->Mapping + TIMER0_CONTROL) &= ~(1 << TIMER_MODE);
    *(Timer->Mapping + TIMER1_CONTROL) &= ~(1 << TIMER_MODE);

    *(Timer->Mapping + TIMER0_CONTROL) |= (1 << PWM_ENABLE);
    *(Timer->Mapping + TIMER1_CONTROL) |= (1 << PWM_ENABLE);

    *(Timer->Mapping + TIMER0_CONTROL) |= (1 << TIMER_EXT_GEN);
    *(Timer->Mapping + TIMER1_CONTROL) |= (1 << TIMER_EXT_GEN);

    *(Timer->Mapping + TIMER0_CONTROL) |= (1 << Timer->Counting);
    *(Timer->Mapping + TIMER1_CONTROL) |= (1 << Timer->Counting);

    Timer_Enable(Timer);
}

void PWM_Disable(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) &= ~(1 << PWM_ENABLE);
    *(Timer->Mapping + TIMER1_CONTROL) &= ~(1 << PWM_ENABLE);
}

void Timer_Interrupt_Enable(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) |= (1 << TIMER_INTERRUPT);

    if(Timer->IsDual)
    {
        *(Timer->Mapping + TIMER1_CONTROL) |= (1 << TIMER_INTERRUPT);
    }
}

void Timer_Interrupt_Disable(Timer_t *Timer)
{
    *(Timer->Mapping + TIMER0_CONTROL) &= ~(1 << TIMER_INTERRUPT);

    if(Timer->IsDual)
    {
        *(Timer->Mapping + TIMER1_CONTROL) &= ~(1 << TIMER_INTERRUPT);
    }
}
