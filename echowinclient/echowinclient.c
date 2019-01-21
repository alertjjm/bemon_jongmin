#include<stdio.h>
#include<stdlib.h>
#include<winsock2.h>
#include<string.h>
#define BUF_SIZE 1024
void ErrorHandling(char* message);
int main(int argc, char* argv[]) {
	WSADATA wsaData;
	SOCKET hsocket;
	SOCKADDR_IN servaddr;
	int strLen, i;
	char message[BUF_SIZE];
	if (argc != 3) {
		printf("Usage: %s <IP> <port>\n");
		exit(1);
	}
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		ErrorHandling("startup error");
	/*변수셋팅*/
	memset(&servaddr, 0, sizeof(servaddr));
	hsocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hsocket == INVALID_SOCKET)
		ErrorHandling("socket error");
	servaddr.sin_family = AF_INET;	
	servaddr.sin_port = htons(atoi(argv[2]));
	servaddr.sin_addr.s_addr = inet_addr(argv[1]);
	/*connect*/
	if (connect(hsocket, (SOCKADDR*)&servaddr, sizeof(servaddr)) == SOCKET_ERROR)
		ErrorHandling("connect error");
	printf("connected..............\n");
	/*send*/
	while (1) {
		fputs("Input message(Q to quit): ",stdout);
		fgets(message, BUF_SIZE, stdin);
		if (!strcmp(message, "q\n") || !strcmp(message, "Q\n")) {
			break;
		}
		send(hsocket, message, strlen(message), 0);
		strLen=recv(hsocket, message, BUF_SIZE - 1, 0);
		message[strLen] = 0;
		printf("Message from the server, %s\n", message);
	}
	closesocket(hsocket);
	WSACleanup();

	/*recv*/
	return 0;
}
void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}