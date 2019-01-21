#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<WinSock2.h>
#define BUF_SIZE 1024
void ErrorHandling(char *message);
int main(int argc, char* argv[]) {
	WSADATA wsaData;
	SOCKET serversocket, clntsocket;
	SOCKADDR_IN servaddr, clntaddr;
	char message[BUF_SIZE];
	int strLen, i;
	int clntaddrsize;
	if (argc != 2) {
		printf("Usage: %s <port>\n", argv[0]);
		exit(1);
	}
	/*SOCKET»ý¼º*/
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	serversocket = socket(PF_INET, SOCK_STREAM, 0);
	/*BIND*/
	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(atoi(argv[1]));
	if(bind(serversocket, (const struct sockaddr*)&servaddr, sizeof(servaddr))==SOCKET_ERROR)
		ErrorHandling("bind error");

	/*LISTEN*/
	if (listen(serversocket, 5) == SOCKET_ERROR)
		ErrorHandling("listen error");
	clntaddrsize = sizeof(clntaddr);
	/*ACCEPT*/
	for (i = 0; i < 5; i++) {
		clntsocket = accept(serversocket, (struct sockaddr*)&clntaddr, &clntaddrsize);
		if (clntsocket == -1)
			ErrorHandling("accept error");
		printf("%d client accepted", i + 1);
		/*recv*/
		while ((strLen = recv(clntsocket, message, BUF_SIZE, 0)) != 0) {
			send(clntsocket, message, strLen, 0);
		}
	}
	closesocket(serversocket);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);

}