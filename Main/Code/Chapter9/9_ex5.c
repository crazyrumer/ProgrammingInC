//-----------------------------------------------------------------------------
// Chapter 9 - Exercsie 5
// Write a function called findString() to determine if one character string exists 
// inside another string.The first argument to the function should be the character 
// string that is to be searched and the second argument is the string you are interested 
// in finding.If the function finds the specified string, have it return the location in 
// the source string where the string was found.If the function does not find the string, 
// have it return − 1. So, for example,
//
// index = findString("a chatterbox", "hat"); 
//
// searches the string "a chatterbox" for the string "hat".Because "hat" does exist inside 
// the source string, the function returns 3 to indicate the starting position inside the
// source string where "hat" was found.
//-----------------------------------------------------------------------------

#include "9_ex5.h"

int p9_ex5(void)
{
	int index = 0;
	index = findString("a chatterbox", "hat"); 
	
	if (index != -1)
	{
		printf("The index is %i\n", index);
	}
	else
	{
		PrintString("The word is not found");
	}
	return 0;
}

int findString(char target[], char search[])
{
	int y = 0;
	int index = 0;
	for (int i = 0; target[i] != '\0'; i++)
	{
		if (target[i] == search[y])
		{
			if (y == 0) // we detected the first letter which matches
			{
				index = i;
			}
			y++;
		}
		else if (search[y] == '\0')
		{
			return index; // we matched the string, so returning starting index
		}
		else
		{
			y = 0; // we didn't match the string so start again
		}
	}

	return -1;
}