//-----------------------------------------------------------------------------
// Programm 9.4 - Testing Strings for quality
//-----------------------------------------------------------------------------
#include "9_4.h"


bool equalStrings(const char s1[], const char s2[])
{
	int		i			= 0;
	bool	areEqual	= false;

	while ( s1[i] == s2[i]	&&
			s1[i] != '\0'	&&
			s2[i] != '\0'		)
	{
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		areEqual = true;
	}
	else
	{
		areEqual = false;
	}

	return areEqual;
}

int p9_4(void)
{
	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf("%i\n", equalStrings (stra, strb));
	printf("%i\n", equalStrings	(stra, stra));
	printf("%i\n", equalStrings	(strb, "string"));

	return 0;
}