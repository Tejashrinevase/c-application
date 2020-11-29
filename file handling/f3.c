/*
application to create open file */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[20] ={'\0'};
	int fd =0;	
	char arr[50] = {'\0'};
	int ret =0;// file discriptor
	int length =0;
	
	printf("enter the file name\n");
	scanf("%s",name);
	
	fd = open(name,O_RDWR | O_CREAT , 0777);
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("file succesfully cretaed with fd %d\n",fd);
	}
	printf("Enter the data that we want to enter\n");
	scanf(" %[^'\n']s",arr);
	
	length = strlen(arr);
	
	ret = write(fd,arr,length);
	if(ret == -1)
	{
		printf("Unable to write file\n");
	}
	else
	{
		printf("Data succesfully written in tthe file\n");
	}
	
	close(fd);
	
	return 0;
}
	