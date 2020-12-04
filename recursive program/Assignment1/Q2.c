/*
Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/

#include<stdio.h>

int LargestDigit(int iNo)
{
	int iDigit = 0;
	static int iMax=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo /10;
		LargestDigit(iNo);
	}
	return iMax;
}	
		
int main()
{
	int iNo = 0;
	int iRet =0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = LargestDigit(iNo);
	printf("The largest number is :%d\n",iRet);
	
	return 0;
}