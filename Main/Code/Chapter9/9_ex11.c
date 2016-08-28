//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 11 
// Extend the strToInt() function from Program 9.11 so that if the first character 
// of the string is a minus sign, the value that follows is taken as a negative number.
//-----------------------------------------------------------------------------

#include "9_ex11.h"

int p9_ex11(void)
{
	printf("%i\n", strToInt("245"));
	printf("%i\n", strToInt("245") + 25);
	printf("%i\n", strToInt("13x5"));
	printf("%i\n", strToInt("-245"));



	return 0;
}

int strToInt(const char string[])
{
	int result = 0;
	int intValue = 0;
	if (string[0] == '-')
	{
		for (int i = 1; string[i] >= '0' && string[i] <= '9'; i++)
		{
			intValue = string[i] - '0';
			result = (result * 10 + intValue);
		}
		result *= -1;
	}
	else
	{
		for (int i = 0; string[i] >= '0' && string[i] <= '9'; i++)
		{
			intValue = string[i] - '0';
			result = result * 10 + intValue;
		}
	}

	return result;
}


