/*
Acept file namee and position and size from user and read that number of byte of data from
that positon
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// function used to open and read whole data of the file
void FileRead( char *Name,int Position,int size)
{
	int fd =0,ret =0;
	char *Mug = NULL;
	Mug = (char*)malloc(size);
	
	
	
	fd = open( Name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return ;
	}
	//Change the current offset
	ret = lseek(fd,Position,SEEK_SET);

	
	ret = read(fd,Mug,size);
	
	write(1,Mug,ret);
	
	printf("\n");
	
	close(fd);
	free(Mug);
	
}

int main()
{
	char name[50] = {'\0'};
	int Value =0;
	int iSize=0;
	
	
	printf("Enter file name\n");
	scanf("%s",name);
	printf("Enter the position\n");
	scanf("%d",&Value);
	
	printf("Enter number of bytes that you want to read\n");
	scanf("%d",&iSize);
	

	FileRead(name,Value,iSize);
	
	return 0;
}
	