/* 
application to crete file
*/

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
	
	fd = creat(name,0777);
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("file succesfully create with fd %d\n",fd);
	}
	close(fd);
	
	return 0;
}
	