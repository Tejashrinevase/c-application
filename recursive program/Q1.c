/*
Write a recursive program which display below pattern.
Output : * * * * *
*/

#include<stdio.h>

void DisplayR(int iValue)
{
	if(iValue<0)
	{
		iValue = -iValue;
	}
	
	if(iValue>0 )
	{
		printf("*\t");
		iValue--;
		DisplayR(iValue);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	DisplayR(iValue);
	
	return 0;
}