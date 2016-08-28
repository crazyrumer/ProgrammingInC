//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 8 
// Using the findString(), removeString(), and insertString() functions from 
// preceding exercises, write a function called replaceString() that takes three 
// character string arguments as follows 
//
// replaceString(source, s1, s2);
//
// and that replaces s1 inside source with the character string s2.
// The function should call the findString() function to locate s1 inside source, 
//then call the removeString() function to remove s1 from source, 
// and finally call the insertString() function to insert s2 into source at the proper location.
// So, the function call 
// 
// replaceString(text, "1", "one"); 
//
// replaces the first occurrence of the character string "1" inside the character string text,
// if it exists, with the string "one".Similarly, the function call 
//
// replaceString(text, "*", ""); 
//
// has the effect of removing the first asterisk inside the text array because 
// the replacement string is the null string.
//-----------------------------------------------------------------------------

#include "9_ex8.h"

int p9_ex8(void)
{
	char source[32] = "this is 1";
	char target[32] = "1";
	char replacement[32] = "";

	replaceString(source, target, replacement);
	PrintString(source);

	return 0;
}

void replaceString(char source[], char target[], char replacement[])
{
	int index = findString(source, target);
	int targetLength = strLength(target);

	removeString(source, index, targetLength);
	
	
	insertString(source, replacement, index);
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