/*
Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int WhiteSpace(char str[])
{
	static int  iCnt = 0;
	static int i =0;
	
	if(str[i] != '\0')
	{	
		if(str[i] ==' ')
		{
			iCnt++;
		}
	i++;
	WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char Arr[30];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^\n]s",&Arr);
	
	iRet = WhiteSpace(Arr);
	printf("The white space are:%d\n",iRet);
	
	return 0;
}