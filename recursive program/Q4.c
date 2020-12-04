/*
Write a recursive program which display below pattern.
Output : A B C D E F
*/

#include<stdio.h>

void Display()
{
	static char cValue ='A';
	if(cValue <= 'F')
	{
		printf("%c\t",cValue);
		cValue++;
		Display(cValue);
	}
}
		
int main()
{
	
	Display();
	return 0;
}