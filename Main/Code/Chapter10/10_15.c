//-----------------------------------------------------------------------------
// Programm 10.15 - Using pointers to find the length of the string
//-----------------------------------------------------------------------------
#include "10_15.h"

int p10_15(void)
{
	printf("%i\n", stringLength("stringLength test"));
	printf("%i\n", stringLength(""));
	printf("%i\n", stringLength("complete"));

	return 0;
}

int stringLength(const char *string)
{
	const char * ptr = string;
	while (*ptr)
	{
		ptr++;
	}
	return ptr - string;
}