
/*Problem Statement:
		Write a program which checks whether 7th & 8th & 9th  bit
is On or OFF.
*/

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Checkbits(int iNo)
{
		int iMask = 0X000001c0;
		int iRet = 0;
		
		if(iNo < 0)
    {
        iNo = -iNo;
    }
    
	iRet = iMask & iNo ;
	
	if(iRet == iMask)
	{
		return TRUE;
	}
	else{
		return FALSE;
	}
}

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;
	
	printf("Enter the number:\n");
	scanf("%d",&iNo);
	
	bRet = Checkbits(iNo);
	if(bRet == TRUE)
	{
		printf("The bits is on \n");
	}
	else
	{
		printf("Bit is off\n");
	}
	return 0;
}
	
	
/*
0000 	0000	0000	0000	0000	0001	1100	0000
0		0		0		0		0		1		c		0
hexadecimal mask is :0X000001c0
*/