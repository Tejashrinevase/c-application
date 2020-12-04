/*
Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1
*/

#include<stdio.h>

void Display(int iNo)
{
	int i =0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if(iNo >i)
	{
		printf("%d\t",iNo);
	
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the number \n");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}
