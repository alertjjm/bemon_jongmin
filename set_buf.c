#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
int main(int argc, char* argv[]){
	int sock;
	int snd_buf=1024*3;
	int rcv_buf=1024*3;
	int state;
	socklen_t len;
	sock=socket(PF_INET, SOCK_STREAM, 0);
	state=setsockopt(sock, SOL_SOCKET, SO_SNDBUF, (void*)&snd_buf, sizeof(snd_buf));
	state=setsockopt(sock, SOL_SOCKET, SO_RCVBUF, (void*)&rcv_buf, sizeof(rcv_buf));
	len=sizeof(snd_buf);
	state=getsockopt(sock, SOL_SOCKET, SO_SNDBUF, (void*)&snd_buf, &len);
	len=sizeof(rcv_buf);
	state=getsockopt(sock, SOL_SOCKET, SO_RCVBUF, (void*)&rcv_buf, &len);
	printf("input: %d\n", rcv_buf);
	printf("output: %d\n", snd_buf);
	return 0;
}
