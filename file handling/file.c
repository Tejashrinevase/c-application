#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[20] ={'\0'};
	int fd =0;
	
	printf("enter the file name\n");
	scanf("%s",name);
	
	fd = open(name,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("file succesfully opened with fd %d\n",fd);
	}
	close(fd);
	
	return 0;
}
	