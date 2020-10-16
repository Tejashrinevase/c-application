	///////////////////////////////////////////////////
	/// 
	///	Function name: DisplayConvert
	/// Input: character
	/// Output : characetr
	/// Discription: It is used to check the given character is vowel or not
	/// Date: 2 August 2020
	/// Author Name: Tejashri Hanumant Nevase
	///
	/////////////////////////////////////////////////////
#include "Header.h"

BOOL CheckVowel(char cValue)
{
	if(cValue=='a' || cValue=='e'||cValue=='i'|| cValue=='o'|| cValue=='u' 
	    ||  cValue=='A' || cValue=='E'||cValue=='I'|| cValue=='O'|| cValue=='U' )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
