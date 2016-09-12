/*
 * DMA.h
 *
 *  Created on: 24.09.2015
 *      Author: Kampi
 */

#ifndef DMA_H_
#define DMA_H_

/*******************************************************************************/
/*                             I N C L U D E S                                 */
/*******************************************************************************/

#include "xparameters.h"
#include "xaxidma.h"
#include "Interrupt.h"

/*******************************************************************************/
/*                             D E F I N E S                                   */
/*******************************************************************************/

#define DMA_0				XPAR_AXI_DMA_0_DEVICE_ID

// DMA-Adressen
#define MEM_BASE_ADDR		0x01000000
#define TX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00100000)
#define RX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00300000)
#define RX_BUFFER_HIGH		(MEM_BASE_ADDR + 0x004FFFFF)

#define MAX_DMA_PACKETS		2048

/*******************************************************************************/
/*                    F U N C T I O N   D E C L A R A T I O N S                */
/*******************************************************************************/

int DMA_Init			(u32 Device_ID, u32 *TxBufferPtr, u32 *RxBufferPtr);
void DMA_EnableInt		(void);
void DMA_DisableInt		(void);
int DMA_Transfer		(u32 *TxBufferPtr, u32 *RxBufferPtr, u32 Length);
int DMA_GetData			(int *RxBufferPtr, int Length);

/*******************************************************************************/
/*                        G L O B A L   V A R I A B L E S                      */
/*******************************************************************************/

// Interruptflags
u32 S2MM_Ready;
u32 MM2S_Ready;

// DMA-Buffer
u32 *MM2S;
u32 *S2MM;

u32 DMA_Status;

/*******************************************************************************/
/*                             I N S T A N C E S                               */
/*******************************************************************************/

XAxiDma_Config 		*DMA_Config;
XAxiDma				DMA;

#endif /* DMA_H_ */
