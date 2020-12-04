/*
Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/
#include<stdio.h>

int SmallChar(char *str)
{
	static int iCnt = 0;
	
	if(*str == NULL)
	{
		return -1;
	}
	
	if(*str != '\0')
	{
		if((*str >= 'a')&&(*str <='z'))
		{
			iCnt++;
		}
		str++;
		SmallChar(str);
	}
	return iCnt;
}
int main()
{
	char Arr[30];
	int iRet =0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = SmallChar(Arr);
	printf("the small character are %d\n",iRet);
	return 0;
}