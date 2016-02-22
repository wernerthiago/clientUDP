/*
 * Address.cpp
 *
 *  Created on: Feb 21, 2016
 *      Author: werner
 */

#include "Address.h"
#include <arpa/inet.h>

Address::Address(unsigned char a, unsigned char b, unsigned char c, unsigned char d, unsigned short port) {
	// TODO Auto-generated constructor stub
	this->address = ( a << 24 ) |  ( b << 16 ) |  ( c << 8 ) |  d;

	myaddr.sin_family=AF_INET;
	myaddr.sin_addr.s_addr=htonl(address);
	myaddr.sin_port=htons(port);
}

const char * Address::GetAddress()	{
	this->address = this->GetA + "." +this->GetB + "." + this->GetC + "." +this->GetD; 
	return this->address;
}
