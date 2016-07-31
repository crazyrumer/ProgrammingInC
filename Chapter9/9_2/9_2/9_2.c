//-----------------------------------------------------------------------------
// Program 9.2 Counting the Characters in a String
//-----------------------------------------------------------------------------

#include <stdio.h>
#include "../../../TimaLib/timalib.h"


// function definition
int stringLength(const char string[]);

int main(void)
{
	int s = 0;
	const char s1[5] = { 'T', 'e', 's', 't', '\0' };
	
	s = stringLength(s1);
	printf("%i", s);
	getchar();
}

int stringLength(const char string[])
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}

	return i;
}
