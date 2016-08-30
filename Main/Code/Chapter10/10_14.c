//-----------------------------------------------------------------------------
// Programm 10.14 - Revised Version of the copyString() Function
//-----------------------------------------------------------------------------
#include "10_14.h"

int p10_14(void)
{
	char string1[] = "A string to be copied";
	char string2[64];

	copyString(string2, string1);
	printf("%s\n", string2);

	copyString(string2, "So is this");
	printf("%s\n", string2);

	return 0;
}

void copyString(char *to, char *from)
{
	while (*from)
	{
		*to++ = *from++;
	}

	*to = '\0';
}