/*
Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F
*/

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo  = -iNo;
	}
	
	static int i = 0;
	if(i<=iNo)
	{
		printf("%c\t",i+65);
		i++;
		Display(iNo);
	}
}

	//if(iNo
int main()
{
	int iNo =0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}
	
	