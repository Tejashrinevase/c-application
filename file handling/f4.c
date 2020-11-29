/*
APplication to open that file
 */

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
	
	fd = open(name,O_RDWR );
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("file succesfully open with fd %d\n",fd);
	}
	ret = read(fd,arr,10);
	if(ret == -1)
	{
		printf("Unable to read file\n");
	}
	else
	{
		printf("Data succesfully read \n");
	}
	printf("Data from file is :%s",arr);
	close(fd);
	
	return 0;
}
	