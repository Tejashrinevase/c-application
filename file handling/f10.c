/*
Acept file name from user and write informtion into the file
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
	int Rollno;
	char Name[20];
	int Marks;
};

void FileWrite(char *name)
{
	int fd = 0 , i=0;
	int ret =0;
	int size =0;
	struct student sobj;
	
	fd = open(name,O_WRONLY);
	
	if(fd==-1)
	{
		printf("Ubable to open file\n");
	}
	printf("Enter the number of student\n");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		printf("Enter roll no\n");
		scanf("%d",&sobj.Rollno);
		
		printf("Enter the name of student\n");
		scanf("%s",&sobj.Name);
		
		printf("Enter the marks\n");
		scanf("%d",&sobj.Marks);
		
		write(fd,&sobj,sizeof(sobj));
		
	}
	
	close(fd);
}
void  ReadFile(char *name)
{
	int fd = 0 , i=0;
	int ret =0;
	int size =0;
	struct student sobj;
	
	fd = open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Ubable to open file\n");
	}
	
	while(ret=read(fd,&sobj,sizeof(sobj))!= 0)
	{
		
		printf("Enter the number of student\n");
		scanf("%d",&size);
		
		for(i=1;i<=size;i++)
		{
			printf(" roll no is:%d\n",sobj.Rollno);
			
			printf("Enter the name of studentis : %s\n",sobj.Name);
			
			printf("Enter the marks %d\n",sobj.Marks);
		}
		
	}
	close(fd);
}
		

int main()
{
	char name[20];
	
	printf("Enter thr file name\n");
	scanf("%s",name);
	
	FileWrite(name);
	ReadFile(name);
	return 0;
}





/*
wAP which read all info of student from the file

which accept fine name which contain information of student and display only names of student
