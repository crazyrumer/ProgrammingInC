//-----------------------------------------------------------------------------
// Programm 9.6 - Reading Lines of Data
//-----------------------------------------------------------------------------
#include "9_6.h"



int p9_6(void)
{
	char buffer[32];
	PrintString("Enter Text:");
	readLine(buffer);
	PrintString(buffer);
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