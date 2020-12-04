/*
Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
*/

#include<stdio.h>

int Display(int iNo)
{
	int iDigit =0;
	static int iProduct =1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
	if(iNo !=0)
	{
		iDigit =iNo % 10;
		iProduct = iProduct * iDigit;
		iNo = iNo / 10;
		Display(iNo);
	}
	return iProduct;
}
				
		
int main()
{
	int iNo =0 ;
	int iRet =0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = Display(iNo);
	printf("The product is %d\n",iRet);
	return 0;
}