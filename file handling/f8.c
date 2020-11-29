/*

 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// function used to open and read whole data of the file
void FileRead( char *Name,int Position)
{
	int fd =0,ret =0;
	char Mug[10]={'\0'};
	
	
	fd = open( Name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return ;
	}
	//Change the current offset
	ret = lseek(fd,Position,SEEK_SET);
	//printf("%d\n",ret);
	
	ret = read(fd,Mug,10);
	printf("DAta from file is:\n");
	//printf("return the value of read %d\n",ret);
	
	write(1,Mug,ret);
	printf("\n");
	
	close(fd);
}

int main()
{
	char name[50] = {'\0'};
	int Value =0;
	
	
	printf("Enter file name\n");
	scanf("%s",name);
	printf("Enter the position\n");
	scanf("%d",&Value);

	FileRead(name,Value);
	
	return 0;
}
	
	