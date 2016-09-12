/*
 * FFT.h
 *
 *  Created on: 25.09.2015
 *      Author: Kampi
 */

#ifndef FFT_H_
#define FFT_H_

/*******************************************************************************/
/*                             I N C L U D E S                                 */
/*******************************************************************************/

#include "xparameters.h"
#include "xgpio.h"
#include "unistd.h"
#include "DMA.h"
#include "FIFO.h"
#include "Interrupt.h"

/*******************************************************************************/
/*                             D E F I N E S                                   */
/*******************************************************************************/

#define USE_INTERRUPT			1

// Error-Codes
#define FIFO_CHECKED			0L
#define FIFO_DATA_ERROR			-1L
#define FIFO_CONFIG_ERROR		-2L

#define TDATA_CHANNEL			1
#define TVALID_CHANNEL			2

// FFT-Direction
#define FFT_FWD					1
#define FFT_INV					0

#define FFT_LENGTH				64

/*******************************************************************************/
/*                        G L O B A L   V A R I A B L E S                      */
/*******************************************************************************/

// Array um die Werte entgegen zu nehmen
// n 		-> Real
// n + 1	-> Imaginär
float 						*SendBuffer;
float 						*ReceiveBuffer;

u32 FFT_Config;

/*******************************************************************************/
/*                    F U N C T I O N   D E C L A R A T I O N S                */
/*******************************************************************************/

void FFT_GPIO_WriteConfig	(u32 *Config);
void FFT_PrintResult		(void);

// FFT-DMA Funktionen
int FFT_DMA_Init			(u32 DMA_ID);

// FFT-FIFO Funktionen
int FFT_FIFO_Init			(u32 Data_FIFO, u32 Config_FIFO);
int FFT_FIFO_Run			(XLlFifo *Fifo, u32 *Quelle, u32 *Ziel, u32 Anzahl);
void FFT_FIFO_RunInt		(XLlFifo *Fifo, u32 *Quelle, u32 Anzahl);
void FFT_FIFO_SendConfig	(XLlFifo *Fifo, u32 *Quelle);

/*******************************************************************************/
/*                        G L O B A L   V A R I A B L E S                      */
/*******************************************************************************/

XGpio_Config 				*FFT_GPIO_Config;
XGpio						FFT_GPIO;

#endif /* FFT_H_ */
