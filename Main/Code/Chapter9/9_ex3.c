//-----------------------------------------------------------------------------
// Chapter 9 - Exercsie 3
//
// The countWords() function from Programs 9.7 and 9.8 incorrectly counts a word 
// that contains an apostrophe as two separate words. Modify this function 
// to correctly handle this situation. Also, extend the function to count a sequence 
// of positive or negative numbers, including any embedded commas and periods, as a single word.
//-----------------------------------------------------------------------------

#include "9_ex3.h"

int p9_ex3(void)
{
	char buffer[128];

	PrintString("Enter the string:\n");
	readLine(buffer);

	printf("count = %i", countWords(buffer));

	return 0;
}

void readLine(char buffer[])
{
	char c;
	int i = 0;
	do
	{
		c = getchar();
		buffer[i] = c;
		i++;
	} while (c != '\n');

	buffer[i - 1] = '\0';
}

// Function to determine if a character is alphabetic
bool alphabetic(const char c)
{
	if (c >= 'a' && c <= 'z' ||
		c >= 'A' && c <= 'Z' ||
		c == '-')
	{
		return true;
	}

	return false;
}

bool isNumber(const char c)
{
	if (c >= '0' && c <= '9')
	{
		return true;
	}

	return false;
}

bool isSpecialCharacter( const char c)
{
	if (c == '.' ||
		c == ',' )
	{
		return true;
	}

	return false;
}

// Function to count number of words in the string
int countWords(const char string[])
{
	int		i = 0;
	int		wordCount = 0;
	bool	lookingForWord = true;

	do
	{
		if (lookingForWord)
		{
			if ( alphabetic(string[i])		|| 
				 isNumber(string[i])		|| 
				 isSpecialCharacter(string[i]))
			{
				lookingForWord = false;
				wordCount++;
			}
		}
		else
		{
			if ( !alphabetic(string[i]) && 
				 !isNumber(string[i])	&& 
				 !isSpecialCharacter(string[i]))
			{
				lookingForWord = true;
			}
		}

		i++;

	} while (string[i] != '\0');



	return wordCount;
}