#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>
#include<sys/select.h>
#define BUF_SIZE 30

int main(int argc, char* argv[]){
	fd_set reads, temps;
	int result, str_len;
	char buf[BUF_SIZE];
	struct timeval timeout;

	FD_ZERO(&reads);
	FD_SET(0, reads);
	/*
	timeout.tv_sec=5;
	timeout.tv_usec=5000;
	*/
	result=select(1, &temps, 0,0,&timeout);
	while(1){
		temps=reads;
		timeout.tv_sec=5;
		timeout.tv_usec=0;
		result=select(1,&temps, 0, 0, &timeout);
	}
	

	return 0;
}
