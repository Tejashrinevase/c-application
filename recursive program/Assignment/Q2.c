
w/*
Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/

#include<stdio.h>

int Display(int iNo)
{
	static int iDigit =0;
	static int iSum =0;
	
	
	if(iNo !=0)
	{
		iDigit =iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		Display(iNo);
	}
	return iSum;
}
				
		
int main()
{
	int iNo =0 ;
	int iRet =0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = Display(iNo);
	printf("The sum is %d\n",iRet);
	return 0;
}