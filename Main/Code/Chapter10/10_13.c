//-----------------------------------------------------------------------------
// Programm 10.13 - Pointer Version of copyString()
//-----------------------------------------------------------------------------
#include "10_13.h"

int p10_13(void)
{
	char string1[]  = "A string to be copied";
	char string2[64];

	copyString(string2, string1);
	printf("%s\n", string2);

	copyString(string2, "So is this");
	printf("%s\n", string2);

	return 0;
}

void copyString(char *to, char *from)
{
	for (;*from != '\0'; to++, from++)
	{
		*to = *from;
	}

	*to = '\0';
}