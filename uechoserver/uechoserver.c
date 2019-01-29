#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<WinSock2.h>
#define BUF_SIZE 30
void ErrorHandling(char* message);
int main(int argc, char* argv[]) {
	WSADATA wsaData;
	SOCKET servsock;
	char message[BUF_SIZE];
	int strLen=0;
	int clntAdrSz;
	SOCKET servSock;
	SOCKADDR_IN servAdr, clntAdr;
	argv[1] = "9190";
	/*if (argc != 2) {
		printf("Usage: %s <port>\n", argv[0]);
		exit(1);
	}*/
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		ErrorHandling("WSAStartup Error!");
	memset(&servAdr, 0, sizeof(servAdr));
	servSock = socket(PF_INET, SOCK_DGRAM, 0);
	servAdr.sin_family = AF_INET;
	servAdr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAdr.sin_port = htons(atoi(argv[1]));
	if (bind(servSock, (const struct sockaddr*)&servAdr, sizeof(servAdr)) == SOCKET_ERROR)
		ErrorHandling("bind Error!");
	while (1) {
		clntAdrSz = sizeof(clntAdr);
		strLen = recvfrom(servSock, message, strLen, 0, &clntAdr, &clntAdrSz);
		sendto(servSock, message, strLen, 0, (const struct sockaddr*)&clntAdr, sizeof(clntAdr));
	}
	closesocket(servSock);
	WSACleanup();
	
	return 0;	
}
void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}