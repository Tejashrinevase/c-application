/*
Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/

#include<stdio.h>

int SmallestDigit(int iNo)
{
	int iDigit = 0;
	static int iMin = 9;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo /10;
		SmallestDigit(iNo);
	}
	return iMin;
}	

/*
int SmallestDigitX(int iNo)
{
	static int iDigit =0;
	int iMin = 9
	while(iNo != 0)
	{
		iDigit = iNo%10;
		iNo = iNo/10;
	}
	if(iDigit<iMin)
	{
		iMin = iDigit;
	}
	return iMin;
}
*/

int main()
{
	int iNo = 0;
	int iRet =0;
	printf("Enetr the number\n");
	scanf("%d",&iNo);
	
	iRet = SmallestDigit(iNo);
	printf("the smallest digit are :%d\n",iRet);
	
	return 0;
}
