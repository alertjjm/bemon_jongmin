#include<stdio.h>
#include<fcntl.h>
#define BUF_SIZE 3
int main(int argc, char* argv[]){
	FILE* fd1;
       	FILE* fd2;
	int len;
	char buf[BUF_SIZE];
	fd1=fopen("news.txt", "r");
	fd2=fopen("cpy.txt","w");
	while(fgets(buf,BUF_SIZE,fd1)!=NULL)
		fputs(buf,fd2);
	fclose(fd1);
	fclose(fd2);
	return 0;

}
