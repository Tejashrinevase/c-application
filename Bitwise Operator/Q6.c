/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>

int CountBits(int value)
{
	int iMask = 0x00000001;
	int iResult=0 ;
	int i=0 ;
	int iCnt=0;
	
	for(i=1; i <= 32; i++)
	{
		iMask = 0x00000001;
		
		iMask = iMask << (i-1);
	
		iResult = value & iMask ;
	
		if(iResult == iMask)
		{
			iCnt++;
		}
	}
	
	return iCnt;
}
	
int main()
{
	int iNo =0;
	int iRet=0;
	printf("Enter the number:\n");
	scanf("%d",&iNo);
	
	iRet=CountBits(iNo);
	printf("the count of on bitsis: %d",iRet);
	
	return 0;
}