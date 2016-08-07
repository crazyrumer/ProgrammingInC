//-----------------------------------------------------------------------------
// Programm 9.8 - Counting Words in a Piece of Text
//-----------------------------------------------------------------------------
#include "9_8.h"

int p9_8(void)
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
		c >= 'A' && c <= 'Z')
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
			if (alphabetic(string[i]))
			{
				lookingForWord = false;
				wordCount++;
			}
		}
		else
		{
			if (!alphabetic(string[i]))
			{
				lookingForWord = true;
			}
		}

		i++;

	} while (string[i] != '\0');



	return wordCount;
}