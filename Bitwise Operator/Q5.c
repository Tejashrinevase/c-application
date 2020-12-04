/*problem statement:
		Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.

*/

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Checkbits(int iNo)
{
		int iMask = 0X80000001;
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
		printf("The first and last bits is on \n");
	}
	else
	{
		printf("Bit is off\n");
	}
	return 0;
}
	
	
/*
1000 	0000	0000	0000	0000	0000	0000	0001
8		0		0		0		0		0		0		1
hexadecimal mask is :0X80000001
*/