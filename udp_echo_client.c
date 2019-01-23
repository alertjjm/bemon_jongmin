#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<unistd.h>
#define BUF_SIZE 30
void error_handling(char* message);

int main(int argc, char* argv[]){
	int str_len;
	int sock;
	struct sockaddr_in serv_adr, clnt_adr;
	socklen_t adr_sz;
	char message[BUF_SIZE];

	if(argc!=3){
		printf("Usage: %s <IP> <Port>", argv[0]);
		exit(1);
	}
	sock=socket(PF_INET, SOCK_DGRAM, 0);
	if(sock==-1)
		error_handling("Socket creation error");
	memset(&serv_adr, 0, sizeof(serv_adr));
	serv_adr.sin_family=AF_INET;
	serv_adr.sin_addr.s_addr=inet_addr(argv[1]);
	serv_adr.sin_port=htons(atoi(argv[2]));
	while(1){
		fputs("Insert message(q to quit)", stdout);
		fgets(message, sizeof(message), stdin);
		if(!strcmp(message, "q\n")||!strcmp(message, "Q\n"))
			break;
		sendto(sock, message, BUF_SIZE, 0, (struct sockaddr*)&serv_adr, sizeof(serv_adr));
		adr_sz=sizeof(clnt_adr);
		str_len=recvfrom(sock, message, BUF_SIZE, 0,(struct sockaddr*)&clnt_adr, &adr_sz);
		message[str_len]=0;
		printf("Message from server: %s", message);
	
	}
	close(sock);

	return 0;
}

void error_handling(char* message){
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
