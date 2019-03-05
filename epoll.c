#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<sys/epoll.h>

#define BUF_SIZE 100
#define EPOLL_SIZE 50
void error_handling(char* buf);

int main(int argc, char* argvp[]){
	int serv_sock, int clnt_sock;
	struct sockaddr_in serv_adr, clnt_adr;
	socklen_t adr_sz;
	int str_len,i;
	char buf[BUF_SIZE];
	struct epoll_event *ep_events;
	struct epoll_event event;
	int epfd, event_cnt;
	if(argc!=2){
		printf("usage: <port>\n");
		exit(1);
	}
	serv_sock=socket(PF_INET, SOCK_STREAM,0);
	memset(&serv_adr, 0, sizeof(serv_adr));
	serv_adr.sin_family=AF_INET;
	serv_adr.sin_addr.s_addr=htonl(INADDR_ANY);
	serv_adr.sin_port=htons(atoi(argv[1]));
	if(bind(serv_sock, (struct sockaddr*)&serv_adr, sizeof(serv_adr))==-1)
		error_handling("bind error");
	if(listen(serv_sock,5)==-1)
		error_handling("listen error");
	epfd=epoll_create(EPOLL_SIZE);
	ep_events=malloc(sizeof(struct epoll_event)*EPOLL_SIZE);
	event.events=EPOLLIN;
	event.data.fd=serv_sock;
	epoll_ctl(epfd,EPOLL_CTL_ADD,serv_sock, &event);
	
	while(1){
		event_cnt=epoll_wait(epfd,ep_events,EPOLL_SIZE,-1);
		if(event_cnt==-1){
			puts("epoll_wait");
			break;
		
		}
		
	
	}	


	return 0;
}
