//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 14 
// Write a function called intToStr() that converts an integer value into a character string.
// Be certain the function handles negative integers properly.
//-----------------------------------------------------------------------------

#include "9_ex14.h"

int p9_ex14(void)
{
	char buffer[32];

	intToStr(-12, buffer);
	PrintString(buffer);
	return 0;
}

void intToStr(int n, char buffer[])
{
	char temp[32];
	int i = 0;
	int y = 0;

	if (n < 0)
	{
		buffer[0] = '-';
		n *= -1;
		y = 1;
	}

	for (;;)
	{
		temp[i] = '0' + n % 10;
		n = n / 10;
		if (n == 0)
		{
			break;
		}
		i++;
	}

	for (; i >= 0; i--, y++)
	{
		buffer[y] = temp[i];
	}

	buffer[y] = '\0';
}

