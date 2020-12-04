/*
Write a recursive program which display below pattern.
Output : 1 2 3 4 5
*/

#include<stdio.h>

void DisplayR()
{
	static int iValue = 1;
	if(iValue<0)
	{
		iValue = -iValue;
	}
	
	if(iValue<=5 )
	{
		printf("%d\t",iValue);
		iValue++;
		DisplayR(iValue);
	}
}

int main()
{
	
	DisplayR();
	
	return 0;
}

/*
#include<stdio.h>

void Display()
{
	int iNo=1;
	
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if(iNo <= 4)
	{
		printf("%d",iNo);
		iNo++;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	
	Display();
	
	return 0;
}*/