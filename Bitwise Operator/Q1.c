/* Problem Statement:
		Write a program which checks whether 15th bit is On or OFF.
	*/
	
#include<stdio.h>

typedef int BOOL;
//typedef unsigned to UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBits(int iNo)
{
	int iMask = 0X00004000;
	int iResult=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}

int main()
{
	int iNo=0;
	BOOL bRet= FALSE;
	
	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	 bRet=CheckBits(iNo);
	 if(bRet == TRUE)
	 {
		 printf("The 15th bit is on\n");
	 }
	 else
	 {
		 printf("BITs is off\n");
	 }
	 return 0;
}
	 
/*

0000 0000 0000 0000 0100 0000 0000 0000
0	 0		0	0	4	  0		0	0  
hexadecimal mask= 0X00004000
*/

