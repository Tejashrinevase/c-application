/* Problem Statement:
Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
*/

#include<stdio.h>

int ModifiedNumber(int iNo,int iPos,int iPos1)
{
	int iMask = 0X00000001;
	int iMask1 = 0X00000001;
	int iResult =0;
	
	if((iPos < 1) && (iPos > 32))
	{
		return 0;
	}
	if( iNo < 0)
	{
		iNo = -iNo;
	}
	
	iMask = iMask << (iPos-1) ;
	iMask1 = iMask1 << (iPos1-1);
	
	iResult = iMask ^ iNo ^iMask1;
	return iResult;
}	
	
int main()
{
	int iNo = 0;
	int iPos = 0 , iPos1 = 0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d" ,&iNo);
	
	printf("Enetr the first position\n");
	scanf("%d", &iPos);
	
	printf("Enetr the position\n");
	scanf("%d",&iPos1);

	iRet=ModifiedNumber(iNo,iPos,iPos1);
	
	printf("the modified number is %d\n", iRet);
	
	return 0;
}