#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
void error_handling(char* message);
int main(int argc, char* argv[]){
	int sock;
	int snd_buf, recv_buf, state;
	socklen_t len;
	sock=socket(PF_INET, SOCK_STREAM, 0);
	len=sizeof(snd_buf);
	state=getsockopt(sock, SOL_SOCKET, SO_SNDBUF,(void*)&snd_buf,&len);
	len=sizeof(recv_buf);
	state=getsockopt(sock, SOL_SOCKET, SO_RCVBUF, (void*)&recv_buf, &len);
	printf("%d\n", snd_buf);
	printf("%d\n", recv_buf);
	return 0;
}

void error_handling(char* message){
	fputs(message,stderr);
	fputc('\n',stderr);
	exit(1);
}
