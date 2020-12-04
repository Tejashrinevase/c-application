/*
Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

void Display(int iNo)
{
	//static int i =0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	if(iNo >0)
	{
		printf("%d\t",iNo);
		printf("*\t");
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}