/*
 * Interrupt.h
 *
 *  Created on: 25.09.2015
 *      Author: Kampi
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

/*******************************************************************************/
/*                             I N C L U D E S                                 */
/*******************************************************************************/

#include "xparameters.h"
#include "xil_exception.h"
#include "xscugic.h"

/*******************************************************************************/
/*                             D E F I N E S                                   */
/*******************************************************************************/

#define GIC_0				XPAR_SCUGIC_SINGLE_DEVICE_ID
#define GPIO_CHANNEL_1_INT	XGPIO_IR_CH1_MASK
#define GPIO_CHANNEL_2_INT	XGPIO_IR_CH2_MASK

/*******************************************************************************/
/*                    F U N C T I O N   D E C L A R A T I O N S                */
/*******************************************************************************/

void Activate_Interrupts	(void);
int Interrupt_Enable		(u32 ID);
void Delete_Interrupt		(u16 Int_ID);
int Setup_Interrupt			(u16 Int_ID, Xil_InterruptHandler Handler, void *CallBack_Ref, u8 Priority, u8 Trigger);

/*******************************************************************************/
/*                        G L O B A L   V A R I A B L E S                      */
/*******************************************************************************/

u32 Interrupt_Status;

/*******************************************************************************/
/*                             I N S T A N C E S                               */
/*******************************************************************************/

XScuGic_Config 				*Interrupt_Config;
XScuGic  			 		Interrupt;

#endif /* INTERRUPT_H_ */
