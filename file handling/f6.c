/*
Accept two file name from user and copy the content into one file into anothe
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// function used to open and read whole data of the file
void CopyFile( char FStart[],char FDest[])
{
	int fd = 0,i=0;
	int fd1 =0;
	char arr[100]={'\0'};
	
	int ret = 0;
	
	fd = open(FStart,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to oepn\n");
		return;
	}
	else
	{
		printf("open file succesfully\n");
	}
	fd1 = open(FDest,O_RDWR | O_CREAT , 0777);
	if(fd1== -1)
	{
		printf("Unable to open file\n");
		close(fd);
		return;
	}
	
	while((ret = read(fd,arr,sizeof(arr)))!= 0)
	{
		printf("Iteration:%d Size Read: %d\n",i,ret);
		write(fd1,arr,ret);
	}
	close(fd);
	close(fd1);
}

int main()
{
	char name[50] = {'\0'};
	char name1[30]={'\0'};
	
	
	printf("Enter file name\n");
	scanf("%s",name);
	printf("Enter the second file name\n");
	scanf("%s",name1);

	CopyFile(name,name1);
	
	return 0;
}
	