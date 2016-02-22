//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <arpa/inet.h>
//#include <netdb.h>
//#include <iomanip>
//#include <iostream>
//#include <sstream>
//#include <string.h>
//#include <string>
//#include <stdlib.h>
//#include <stdio.h>
//
//using namespace std;
//
//int main(void){
//	//Structure for address of server
//
//	struct sockaddr_in myaddr;
//	int sock;
//	memset(&myaddr, 0, sizeof(myaddr));
//	myaddr.sin_family=AF_INET;
//	myaddr.sin_addr.s_addr=htonl(INADDR_ANY);
//	myaddr.sin_port=htons(0);
//
//	//Create the socket
//	if((sock=socket(AF_INET, SOCK_DGRAM, 0))<0) {
//		perror("Failed to create socket");
//		exit(EXIT_FAILURE);
//	}
//
//
//	if(bind(sock,( struct sockaddr *) &myaddr, sizeof(myaddr))<0) {
//		perror("bind failed");
//		exit(EXIT_FAILURE);
//	}
//
//	//   std::cout << "Bind";
//	inet_pton(AF_INET,"127.0.0.1",&myaddr.sin_addr.s_addr);
//	myaddr.sin_port=htons(1234);
//	std::string s("FUNCIONOU");
//
//	//send the message to server
//	int i = 1;
//	while(i<11){
//		if(sendto(sock, s.c_str(), s.size(), 0,(struct sockaddr *)&myaddr, sizeof(myaddr))!=s.size()) {
//			perror("Mismatch in number of bytes sent");
//			std::cout << "Erro no envio do pacote!" << std::endl;
//			exit(EXIT_FAILURE);
//		}
//		std::cout << "Enviando pacote...: " << i << ", enviado!" << std::endl;
//		i++;
//	}
//	close(sock);
//	std::cout << "Close socket!" << std::endl;
//	return 0;
//}

#include "Socket.h"
#include "Address.h"
#include <iostream>

using namespace std;

int main(){
	Socket socket;
	Address address(127,0,0,1,1234);

	socket.Open(address);
	if(socket.Send(address,"Funcionouuuuuuuuu")){
		cout << "Enviado!" << endl;
	}else{
		cout << "Vish, deu erro..." << endl;
	}
}
