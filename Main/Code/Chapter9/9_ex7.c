//-----------------------------------------------------------------------------
// Chapter 9 - Exercsie 7
// Write a function called insertString() to insert one character string into another string.
// The arguments to the function should consist of the source string, the string to be inserted,
// and the position in the source string where the string is to be inserted.So, the call 
// 
// insertString(text, "per", 10); 
//
// with text as originally defined in the previous exercise, results in the character string "per" 
// being inserted inside text, beginning at text[10].Therefore, the character string "the wrong person" 
// is stored inside the text array after the function returned.
//-----------------------------------------------------------------------------

#include "9_ex7.h"

int p9_ex7(void)
{
	char string[32] = "the wrong son";
	char substring[32] = "per";
	
	insertString(string, substring, 10);
	PrintString(string);
	return 0;
}

void insertString(char string[], char substring[], int startIndex)
{
	int substringLength = strLength(substring);
	int stringLength	= strLength(string);
	int y				= 0;

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