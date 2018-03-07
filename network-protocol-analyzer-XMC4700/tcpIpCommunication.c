/*
 * tcpIpCommunication.c
 *
 *  Created on: Feb 11, 2016
 *      Author: BotezDia
 */

#include <DAVE.h>
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/tcp.h"
#include "tcpIpCommunication.h"

#include "Dave/Generated/ETH_LWIP/eth_lwip.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/lwip/netif.h"
#include "Dave/Generated/ETH_LWIP/lwip/port/netif/ethernetif.h"
#include "Dave/Generated/ETH_LWIP/lwip/include/netif/etharp.h"
#include "Libraries/CMSIS/Infineon/XMC4700_series/Include/XMC4700.h"


/**
 * @brief variables used for setting the IP address, default gateway, subnet mask and MAC address
 * Setting the MAC address doesn't work
 */

extern XMC_ETH_MAC_t eth_mac;
extern struct netif xnetif;


err_t tcp_received_callback(void* arg, struct tcp_pcb* tpcb, struct pbuf* p, err_t err)
{
	tcp_recved(tpcb, p->len); 	// indicate that the packet has been received
}

err_t tcp_accepted_callback(void *arg, struct tcp_pcb *tpcb, signed char flags)
{

	tcp_recv(tpcb, tcp_received_callback);
	tcp_poll(tpcb, NULL, 1);
	tcp_arg(tpcb, NULL);
	tcp_accepted(tpcb);

}

void tcpInitServer(unsigned int port)
{
	struct tcp_pcb *pcb;					// define a TCP_PCB structure
	pcb = tcp_new();						// initialize the new TCP PCB structure
	tcp_bind(pcb, IP_ADDR_ANY, port);		// bind the TCP_PCB structure with any IP address on the given port
	pcb = tcp_listen(pcb);					// listen for connections
	tcp_accept(pcb, tcp_accepted_callback);	// accept the connection and attach the given callback
}

