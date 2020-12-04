/*
Write a recursive program which display below pattern.
Output : 5 4 3 2 1
*/

#include<stdio.h>

void Display(int iNo)
{

	if(iNo > 0)
	{
		printf("%d\t",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the value\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}
	