//-----------------------------------------------------------------------------
// Chapter 9 - Exercsie 6
// Write a function called removeString() to remove a specified number of characters 
// from a character string.The function should take three arguments : the source string, 
// the starting index number in the source string, and the number of characters to remove.
// So, if the character array text contains the string "the wrong son", the call 
//
// removeString(text, 4, 6); 
//
// has the effect of removing the characters “wrong”(the word “wrong” plus the space that follows) 
// from the array text.The resulting string inside text is then "the son".

//-----------------------------------------------------------------------------

#include "9_ex6.h"

int p9_ex6(void)
{
	char text[] = "the wrong son";
	removeString(text, 4, 6);
	PrintString(text);
	return 0;
}

void removeString(char text[], int startIndex, int numberToRemove)
{
	for (int i = startIndex; ; i++)
	{
		text[i] = text[i + numberToRemove];

		if (text[i + numberToRemove] == '\0')
		{
			return;
		}
	}
}