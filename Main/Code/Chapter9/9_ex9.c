//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 9 
// You can extend even further the usefulness of the replaceString() function 
// from the preceding exercise if you have it return a value that indicates 
// whether the replacement succeeded, which means that the string to be replaced 
// was found inside the source string.So, if the function returns true if the replacement 
// succeeds and false if it does not, the loop 
// 
// do 
//	  stillFound = replaceString(text, " ", ""); 
// while (stillFound); 
//
// could be used to remove all blank spaces from text, for example.
// Incorporate this change into the replaceString() function and try it with various character strings to ensure that 
// it works properly.
//-----------------------------------------------------------------------------

#include "9_ex9.h"

int p9_ex9(void)
{
	char source[32] = "this is 1";
	char target[32] = " ";
	char replacement[32] = "";

	for (;;)
	{
		if (!replaceString(source, target, replacement))
		{
			break;
		}
	}
	PrintString(source);

	return 0;
}

bool replaceString(char source[], char target[], char replacement[])
{
	int index = findString(source, target);
	if (index == -1)
	{
		return false;
	}

	int targetLength = strLength(target);

	removeString(source, index, targetLength);

	insertString(source, replacement, index);

	return true;
}

void insertString(char string[], char substring[], int startIndex)
{
	int substringLength = strLength(substring);
	int stringLength = strLength(string);
	int y = 0;

	// move letter to the right by length of the substring
	for (int i = stringLength - 1; i >= startIndex; i--)
	{
		string[i + substringLength] = string[i];
	}

	// replace letters in the string with substring
	for (int i = startIndex; i < startIndex + substringLength; i++, y++)
	{
		string[i] = substring[y];
	}

	string[stringLength + substringLength] = '\0';
}

int strLength(char string[])
{
	int i = 0;
	while (string[i] != '\0')
	{
		i++;
	}

	return i;
}

void removeString(char text[], int startIndex, int numberToRemove)
{
	for (int i = startIndex;; i++)
	{
		text[i] = text[i + numberToRemove];

		if (text[i + numberToRemove] == '\0')
		{
			return;
		}
	}
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

		if (search[y] == '\0')
		{
			return index; // we matched the string, so returning starting index
		}

		if (target[i] != search[y])
		{
			y = 0; // we didn't match the string so start again
		}
	}

	return -1;
}