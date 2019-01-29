#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<WinSock2.h>
#define BUF_SIZE 32
void ErrorHandling(char* message);

int main(int argc, char* argv[]){
	SOCKET sock;
	WSADATA wsaData;
	char message[BUF_SIZE];
	int strLen;
	SOCKADDR_IN servAdr;
	if (argc != 3)
		ErrorHandling("Usage: <IP> <port>");
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		ErrorHandling("WSAStartup Error");
	sock = socket(PF_INET, SOCK_DGRAM, 0);
	if (sock == INVALID_SOCKET)
		ErrorHandling("socket error");
	memset(&servAdr, 0, sizeof(servAdr), sizeof(servAdr));
	servAdr.sin_addr.S_un.S_addr = inet_addr(argv[1]);
	servAdr.sin_family = AF_INET;
	servAdr.sin_port = htons(atoi(argv[2]));
	connect(sock, (const struct sockaddr*)&servAdr, sizeof(servAdr));
	while (1) {
		fputs("insert message(q): ", stdout);
		fgets(message, sizeof(message), stdin);
		if (!strcmp(message, "q\n") || !strcmp(message, "Q\n"))
			break;
		send(sock, message, strlen(message), 0);
		strLen = recv(sock, message, sizeof(message) - 1, 0);
		message[strLen] = 0;
		printf("message: %s", message);
	}
	closesocket(sock);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}