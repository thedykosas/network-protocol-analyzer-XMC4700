/*
 * macros.c
 *
 *  Created on: Aug 1, 2016
 *      Author: BotezDia
 */

#include "macros.h"


uint8_t SHOW_TCPIP_MESSAGE_ON_WEBPAGE = 0;
uint8_t SEND_TCPIP_MESSAGE_ON_RS232 = 0;
uint8_t SEND_TCPIP_MESSAGE_ON_GPIO = 0;
uint8_t SEND_TCPIP_MESSAGE_ON_SPI = 0;
uint8_t RS232_FLOW_CONTROL = 0;
uint8_t GENERIC_DRIVER_INTERFACE = 0;

err_t XMCGoesVisaStatus = XMCGVISA_OK;

err_t errBuffer[ERR_BUFFER_SIZE] = {0x00};
err_t errBufferIdx = 0;


