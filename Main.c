/* Problem Statement: Accept number from user and display the even number of that number */

/* Algorithm:
		START:
			Accept one number from user as iNo;
			create one counter as iCnt and initialise it as 1;
			continue the counter till the duble of the number which given by user;
			if icnt divide completely by 2 return that number;
			continue the process till the iteration;
		END

*/
#include "Header.h"

int main()
{
	int iNo=0;

	printf("Enter the number:");
	scanf("%d",&iNo);
	
	PrintEven(iNo);

}