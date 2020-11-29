/*
APplication which accept file name from user and dsplay whole file on screen
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// function used to open and read whole data of the file
void DisplayWholeFile( char FName[])
{
	int fd = 0;
	char arr[100]={'\0'};
	//char arr[00] ;//= {'\0'};
	int ret = 0;
	
	fd = open(FName,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to oepn\n");
		return;
	}
	printf("Data from file is :\n");
	while((ret = read(fd,arr,100))!= 0)
	{
		write(1,arr,ret);
	}
	close(fd);
		
}

int main()
{
	char name[50] = {'\0'};
	
	printf("Enter file name\n");
	scanf("%s",name);

	DisplayWholeFile(name);
	
	
	
	return 0;
}
	