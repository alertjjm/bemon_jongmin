#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#define BUF_SIZE 1024
int main(int argc, char*argv[]){
	int sock;
	char message[BUF_SIZE];
	int str_len;
	struct sockaddr_in serv_adr;
	int opcnt;
	int i;
	int result;
	if(argc!=3){
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}
	sock=socket(PF_INET, SOCK_STREAM, 0);
	memset(&serv_adr, 0, sizeof(serv_adr));
	serv_adr.sin_family=AF_INET;
	serv_adr.sin_addr.s_addr=inet_addr(argv[1]);
	serv_adr.sin_port=htons(atoi(argv[2]));
	connect(sock, (struct sockaddr*)&serv_adr, sizeof(serv_adr));
	puts("Connected......");
	fputs("Operand count: ", stdout);
	scanf("%d", &opcnt);
	message[0]=(char)opcnt;
	for(i=0; i<opcnt; i++){
		printf("Operand %d: ", i+1);
		scanf("%d", (int*)&message[i*4+1]);
	}
	fgetc(stdin);
	fputs("Operator: ", stdout);
	scanf("%c", &message[opcnt*4+1]);
	write(sock, message, opcnt*4+2);
	read(sock, &result, 4);
	printf("Operation result: %d \n", result);
	close(sock);
	return 0;
}
