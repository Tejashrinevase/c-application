

/////////////////////////////////////////////////////////////
/// Function Name: PrintEven;
/// Input: integer
/// Output: integer
/// Discription: it is used to display even number
/// author: Tejashri H Nevase
/// Date: 1 Aug 2020	
////////////////////////////////////////////////////////////
#include "Header.h"

 void PrintEven(int iNo)
{

	int iCnt=0;
	for(iCnt=2;iCnt<=iNo*2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\n",iCnt);
		}
	}
}