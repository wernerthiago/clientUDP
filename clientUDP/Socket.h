/*
 * Socket.h
 *
 *  Created on: Feb 21, 2016
 *      Author: werner
 */

#ifndef SOCKET_H_
#define SOCKET_H_

#include "Address.h"

class Socket {
public:
	Socket();
	virtual ~Socket();
	bool Open(Address address);
	void Close();
	bool Send(Address address, const void * data);
	const void * Receive(Address sender, void* data);
private:
	int fd;
};

#endif /* SOCKET_H_ */
