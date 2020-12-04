/*
.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/

#include<stdio.h>

void Display(int iNo)
{
	static int i = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(i<=iNo)
	{
		printf("%c\t",i+97);
		i++;
		Display(iNo);
	}
}

	
int main()
{
	int iNo =0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}
	