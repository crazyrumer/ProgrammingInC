//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 9
// Rewrite the readLine() function from Chapter 9 so that it uses a character pointer rather than an array.
//-----------------------------------------------------------------------------
#include "10_ex9.h"

int p10_ex9(void)
{
	char buffer[128];
	PrintString("What is your favorite color\n");
	readLine(buffer);
	printf("Your favorite color is %s\n", buffer);
	return 0;
}

void readLine(char* buffer)
{
	for (;;)
	{
		*buffer = getchar();
		if (*buffer == '\n')
		{
			*buffer = '\0';
			return;
		}
		buffer++;
	}
}
