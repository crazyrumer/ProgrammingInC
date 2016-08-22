//-----------------------------------------------------------------------------
// Programm 9.11 - Converting String to its Integer equivalent
//-----------------------------------------------------------------------------
#include "9_11.h"

int p9_11(void)
{
	printf("%i\n", strToInt("245"));
	printf("%i\n", strToInt("245") + 25);
	printf("%i\n", strToInt("13x5"));

	
	return 0;
}

int strToInt(const char string[])
{
	int result		= 0;
	int intValue	= 0;
	for (int i = 0; string[i] >= '0' && string[i] <= '9'; i++)
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return result;
}


