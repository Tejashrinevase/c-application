/* Problem Statement:
		Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15
*/

#include<stdio.h>

int ModifiedNumber(int iNo,int iPos)
{
	int iMask = 0X00000001;
	int iResult = 0;
	
	if((iPos < 1) && (iPos > 32))
	{
		return 0;
	}
	if( iNo < 0)
	{
		iNo = -iNo;
	}
	iMask = iMask << (iPos -1);
	
	iResult = iMask ^ iNo ;
	
	return iResult;
}
	
int main()
{
	int iNo=0;
	int iPos=0,iRet=0;
	
	printf("enter the number:\n");
	scanf("%d" , &iNo); 
	
	printf("Enter the posotion :\n");
	scanf("%d" , &iPos);
	
	iRet=ModifiedNumber(iNo,iPos);
	
	printf("The modified number is :%d\n",iRet);
	return 0;
	
	
}
	
