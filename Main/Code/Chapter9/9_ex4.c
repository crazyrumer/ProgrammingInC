//-----------------------------------------------------------------------------
// Chapter 9 - Exercsie 4
// Write a function called substring() to extract a portion of a character string.
// The function should be called as follows :
//
// substring(source, start, count, result);
//
// where source is the character string from which you are extracting the substring, 
// start is an index number into source indicating the first character of the substring,
// count is the number of characters to be extracted from the source string, and 
// result is an array of characters that is to contain the extracted substring.For example, the call 
// 
// substring("character", 4, 3, result);
//
// extracts the substring "act" (three characters starting with character number 4) from the string "character"
// and places the result in result. 
// Be certain the function inserts a null character at the end of the substring in the result array.
// Also, have the function check that the requested number of characters does, in fact, exist in the string.
// If this is not the case, have the function end the substring when it reaches the end of the source string.
//So, for example, a call such as
//
// substring(" two words", 4, 20, result);
//
// should just place the string “words” inside the result array, even though 20 characters were requested by the call.
//-----------------------------------------------------------------------------

#include "9_ex4.h"

int p9_ex4(void)
{
	char result[16];
	char source[] = "hello";
	substring(" two words", 4, 20, result);
	PrintString(result);
	return 0;
}

void readLine(char buffer[])
{
	for (int i = 0;; i++)
	{
		buffer[i] = getchar();
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			return;
		}
	}
}

int compareStrings(char s1[], char s2[])
{
	for(int i = 0; ;i++)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] != '/0')
			{
				return 0; // word found
			}
		}
		else
		{
			return (s1[i] > s2[i]) ? 1 : -1;
		}
	}
}

void substring(char source[], int start, int count, char result[])
{
	int i = 0;
	while (i < count && source[start + i] != '\0')
	{
		result[i] = source[start + i];
		i++;
	}

	result[i] = '\0';
}
