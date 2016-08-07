//-----------------------------------------------------------------------------
// Programm 9.7 - Countint Words
//-----------------------------------------------------------------------------
#include "9_7.h"

int p9_7(void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go...again.";

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
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
	int		i				= 0;
	int		wordCount		= 0;
	bool	lookingForWord	= true;
	char	c;

	do
	{
		c = string[i];
		if (lookingForWord)
		{
			if (alphabetic(c))
			{
				lookingForWord = false;
				wordCount++;
			}
		}
		else
		{
			if (!alphabetic(c))
			{
				lookingForWord = true;
			}
		}

		i++;

	} while (c != '\0');
	


	return wordCount;
}