/*
 * Address.h
 *
 *  Created on: Feb 21, 2016
 *      Author: werner
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <netinet/in.h>

class Address {
public:
	Address();
	Address(unsigned char a, unsigned char b, unsigned char c, unsigned char d, unsigned short port);
	Address(unsigned int address,unsigned short port);
	const char GetAddress();
	unsigned char GetA() const;
	unsigned char GetB() const;
	unsigned char GetC() const;
	unsigned char GetD() const;
	sockaddr_in GetAddr(){
		return this->myaddr;
	}
	unsigned short GetPort() const;
private:
	sockaddr_in myaddr;
	const char * address;
	unsigned short port;
};

#endif /* ADDRESS_H_ */
