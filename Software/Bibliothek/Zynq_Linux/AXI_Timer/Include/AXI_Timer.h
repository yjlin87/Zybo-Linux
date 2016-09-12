#ifndef AXI_TIMER_H_INCLUDED
#define AXI_TIMER_H_INCLUDED

#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

#define TIMER_MODE      0x00
#define TIMER_EXT_GEN   0x02
#define TIMER_INTERRUPT 0x06
#define TIMER_ENABLE    0x07
#define PWM_ENABLE      0x09

#define TIMER0_CONTROL  0x00
#define TIMER0_LOAD     0x01
#define TIMER0_COUNTER  0x02
#define TIMER1_CONTROL  0x04
#define TIMER1_LOAD     0x05
#define TIMER1_COUNTER  0x06

typedef enum Timer_UpDown_t
{
    Timer_Count_Up = 0x00,
    Timer_Count_Down = 0x01,
} Timer_UpDown;

typedef enum Timer_Mode_t
{
    Timer_Generate = 0x00,
    Timer_Capture = 0x01,
} Timer_Mode;

typedef struct {
	unsigned long Baseaddress;
	volatile unsigned int *Mapping;
	bool IsDual;
	Timer_UpDown Counting;
	Timer_Mode Mode;
} Timer_t;

int Timer_Init(Timer_t *Timer);
void Timer_SoftReset(Timer_t *Timer);
void Timer_Enable(Timer_t *Timer);
void Timer_Disable(Timer_t *Timer);
void Timer_Interrupt_Enable(Timer_t *Timer);
void Timer_Interrupt_Disable(Timer_t *Timer);
void PWM_Enable(Timer_t *Timer);
void PWM_Disable(Timer_t *Timer);

#endif // AXI_TIMER_H_INCLUDED
