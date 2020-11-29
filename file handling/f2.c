/*
application to create open file */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[20] ={'\0'};
	int fd =0;				// file discriptor
	
	printf("enter the file name\n");
	scanf("%s",name);
	
	fd = open(name,O_RDWR | O_CREAT , 0777);
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("file succesfully cretaed
		",fd);
	}
	close(fd);
	
	return 0;
}
	