/*
Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/

#include<stdio.h>

int StrLen(char str[])
{
	static int iCnt =0;
	static int i =0;
	 
	if(str[i] != '\0')
	{
		iCnt++;
		i++;
		StrLen(str);
	}

	return iCnt;
}
	
int main()
{
	int iRet = 0;
	char Arr [30];
	
	printf("Enter the String \n");
	scanf("%s",Arr);
	
	iRet = StrLen(Arr);
	printf("Count of character is %d\n",iRet);
	
	return 0;
}