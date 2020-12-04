/*
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/

#include<stdio.h>

int ReverseNumber(int iNo)
{
	static int iDigit=0;
	static int iRev = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10)+iDigit;
		iNo = iNo / 10;
		ReverseNumber(iNo);
	}
	return iRev;
}
int main()
{
	int iValue = 0;
	int iRet =0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = ReverseNumber(iValue);
	printf("the reverse nuber is %d\n",iRet);
	
	return 0;
}
	