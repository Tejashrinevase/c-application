/* Problem statement:
                    Accept one charecter from user and Check the given character  is vowels or not	.
	*/
	
/*	
Algorithm:
		START:
		
			Accept one character from user as cValue;
			compare the character with vowels
			if result is true
			then
			    print it is vowels;
			else
				print it is not vowels;
		END
			
*/

#include "Header.h"



int main()
{
	char cValue='\0';
	BOOL bRet= FALSE;
	
	printf("Enter the one character:\n");
	scanf("%c",&cValue);
	
	bRetet=CheckVowel(cValue);
	
	if (bRet== TRUE)
	{
		printf("It Is vowel");
	}
	else
	{
		printf("It Is not a vowels");
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
