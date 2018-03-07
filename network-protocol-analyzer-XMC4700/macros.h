/*
 * macros.h
 *
 *  Created on: Jul 15, 2016
 *      Author: BotezDia
 */

#ifndef MACROS_H_
#define MACROS_H_

#include "DAVE.h"

#define BUFFER_SIZE 				528	// Maximum size for the received  message
#define GPIO_BUSS_SIZE 				10	// The size of the GPIO buss
#define ERR_BUFFER_SIZE 			16	// The maximum number of errors to be stored in the local buffer

#define XMCGVISA_GPIO_0				38	// 0 logic read from pin
#define XMCGVISA_GPIO_1				39	// 1 logic read from pin
#define MAX_LENGTH_GPIO				16	// The maximum length of a gpio write command
/* XMCGVISA system errors */
#define XMCGVISA_OK 				0	// The system has no error
#define XMCGVISA_UNKN_CMD			1	// Unknown change mode command argument
#define XMCGVISA_MEM				2	// Memory overflow or too big index

/* XMCGVISA TCPIP errors */
#define XMCGVISA_MSG_INCOMPLETE		20	// Message incomplete
#define XMCGVISA_MSG_OK				21	// Message received ok
#define XMCGVISA_UNKN_IP_RANGE		22	// IP is not valid. ex: 192.168.1.258
#define XMCGVISA_UNKN_MASK			23	// Net Mask is not valid. ex:258.256.256.0
#define XMCGVISA_UNKN_GATEWAY		24	// Gateway is not valid. ex. 192.168.1.257
#define XMCGVISA_ERR_MAC			25	// Mac is not valid

/* XMCGVISA RS232 errors */
#define XMCGVISA_ERR_BAUD			40	// Error changing the baud rate
#define XMCGVISA_ERR_DATA			41	// Error changing the data bits
#define XMCGVISA_ERR_STOP			42	// Error changing the stop bits
#define XMCGVISA_ERR_PARITY			43	// Error changing the parity
#define XMCGVISA_UNKN_BAUD			44	// Unknown baud rate
#define XMCGVISA_UNKN_DATA			45	// Unknown data bits
#define XMCGVISA_UNKN_STOP			46	// Unknown stop bits
#define XMCGVISA_UNKN_PARITY		47	// Unknown parity
#define XMCGVISA_UNKN_FCTR          48  // Unknown flow control parameter

/* XMCGVISA GPIO errors */
#define XMCGVISA_ERR_UNKN_PIN_DIR	60	// Unknown pin direction
#define XMCGVISA_ERR_UNKN_LEVEL		61	// Unknown output level
#define XMCGVISA_ERR_UNKN_STRENGHT	62	// Unknown output strength level
#define XMCGVISA_ERR_WRONG_PIN_DIR	63	// Wrong pin direction. When trying to use an input pin as output and vice-versa.
#define XMCGVISA_UNKN_PIN			64	// Unknown port identifier
#define XMCGVISA_UNKN_GPIO_CMD		65	// Unknown GPIO command


/* XMCGVISA SPI FLASH errors */
#define XMCGVISA_UNKN_SPI_CMD		80	// Unknown SPI command
#define XMCGVISA_UNKN_FLASH_PAGE	87  // Unknown Flash Page (page must be from 128 to 8191)
#define XMCGVISA_ERR_SPI_STRING 	88  // If INFO:WRT:<page_nr>:string, string parameter contains more than 512 characters

#define XMCGVISA_UNKN_FLASH_MEMORY  100  // Incorrect flash memory was installed. Correct flash is AT45DB321E


/* XMCGVISA DUT errors */

#define XMCGVISA_UNKN_DUT_CMD		120
#define XMCGVISA_UNKN_DUT			121

/* XMCGVISA USB errors */


/* External variables */
extern uint8_t SHOW_TCPIP_MESSAGE_ON_WEBPAGE;
extern uint8_t SEND_TCPIP_MESSAGE_ON_RS232;
extern uint8_t SEND_TCPIP_MESSAGE_ON_GPIO;
extern uint8_t SEND_TCPIP_MESSAGE_ON_SPI;
extern uint8_t RS232_FLOW_CONTROL;
extern uint8_t GENERIC_DRIVER_INTERFACE;

extern err_t XMCGoesVisaStatus;
extern err_t errBuffer[ERR_BUFFER_SIZE];
extern err_t errBufferIdx;




#endif /* MACROS_H_ */
