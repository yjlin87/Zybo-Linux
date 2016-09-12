/*
 * FIFO.h
 *
 *  Created on: 28.12.2014
 *      Author: Daniel
 */

#ifndef FIFO_H_
#define FIFO_H_

/*******************************************************************************/
/*                             I N C L U D E S                                 */
/*******************************************************************************/

#include "xstatus.h"
#include "xparameters.h"
#include "xllfifo.h"

/*******************************************************************************/
/*                             D E F I N E S                                   */
/*******************************************************************************/

#define FIFO_0					XPAR_AXI_FIFO_DATA_DEVICE_ID
#define FIFO_1					XPAR_AXI_FIFO_FFT_CONFIG_DEVICE_ID

#define FIFO_0_INT				XPAR_FABRIC_AXI_FIFO_DATA_INTERRUPT_INTR
#define FIFO_1_INT				XPAR_FABRIC_AXI_FIFO_FFT_CONFIG_INTERRUPT_INTR

#define MAX_PACKET_LEN 			4
#define PAKET_WIDTH 			4
#define MAX_NO_OF_PACKETS 		2048
#define MAX_DATA_BUFFER_SIZE 	MAX_NO_OF_PACKETS * MAX_PACKET_LEN

/*******************************************************************************/
/*                    F U N C T I O N   D E C L A R A T I O N S                */
/*******************************************************************************/

int Setup_Fifo					(XLlFifo *Fifo, u32 ID);
void FIFO_SendToBuffer			(XLlFifo *Fifo, u32 Quelle);
void FIFO_SendData				(XLlFifo *Fifo, u32 Anzahl, u32 Interrupt);
int FIFO_ReadData				(XLlFifo *Fifo, u32 *Receive);
int FIFO_EnableInt				(XLlFifo *Fifo, u32 Mask);
void FIFO_DisableInt			(XLlFifo *Fifo, u32 Mask);

void FIFO_0_Handler				(void *CallbackRef);

void FIFO_SendComplete			(XLlFifo *Fifo);
void FIFO_ReceiveComplete		(XLlFifo *Fifo);
void FIFO_GetError				(XLlFifo *Fifo, u32 Interrupt_Register);

/*******************************************************************************/
/*                        G L O B A L   V A R I A B L E S                      */
/*******************************************************************************/

u32	Fifo_Status;

volatile u32 Send_Complete;
volatile u32 Error;

// Buffer for Interrupthandling
u32 SourceBuffer				[MAX_DATA_BUFFER_SIZE * PAKET_WIDTH];
u32 DestinationBuffer			[MAX_DATA_BUFFER_SIZE * PAKET_WIDTH];

/*******************************************************************************/
/*                             I N S T A N C E S                               */
/*******************************************************************************/

XLlFifo 						Fifo_0;
XLlFifo 						Fifo_1;

#endif /* FIFO_H_ */
