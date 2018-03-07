/*
 * tcpIpCommunication.h
 *
 *  Created on: Feb 11, 2016
 *      Author: BotezDia
 */ 

#ifndef TCPIPCOMMUNICATION_H_
#define TCPIPCOMMUNICATION_H_

#include <DAVE.h>
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/err.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/pbuf.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/ip4_addr.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/netif.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/tcp.h"
#include "macros.h"

/* Global variables */
char messageReceived[BUFFER_SIZE];	// the message received through TCP/IP

/* Callback methods */
err_t tcp_received_callback(void* arg, struct tcp_pcb* pcbTCP, struct pbuf* p, err_t err);
err_t tcp_accepted_callback(void *arg, struct tcp_pcb *tpcb, signed char flags);
void tcpInitServer(unsigned int port);


#endif /* TCPIPCOMMUNICATION_H_ */
