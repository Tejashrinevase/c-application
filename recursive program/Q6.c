/*
Write a recursive program which display below pattern.
Input : 5
Output : * * * * *
*/

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	static int i = 1;
	if(i <= iNo)
	{
		printf("*\t");
		i++;
		Display(iNo);
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}


	