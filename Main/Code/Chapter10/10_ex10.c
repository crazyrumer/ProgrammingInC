//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 10
// Rewrite the compareStrings() function from Chapter 9 to use character pointers instead of arrays.
//-----------------------------------------------------------------------------
#include "10_ex10.h"

int p10_ex10(void)
{
	char a[] = "test";
	char b[] = "test";
	char c[] = "taste";
	char d[] = "toste";

	testStrings(a, b);
	testStrings(a, c);
	testStrings(a, d);

	return 0;
}

int compareStrings(char* string1, char* string2)
{
	for (;;)
	{
		if (*string1 == *string2)
		{
			if (*string1 == '\0')
			{
				return 0; // string equals
			}
		}
		else if (*string1 > *string2)
		{
			return 1; // string 1 comes before string 2
		}
		else
		{
			return -1; // string 1 comes after string 2
		}

		string1++;
		string2++;
	}
}

void testStrings(char* string1, char* string2)
{
	int i = compareStrings(string1, string2);
	switch (i)
	{
		case -1:
			PrintString("String1 comes before string2\n");
			break;
		case 0:
			PrintString("Strings are equal\n");
			break;
		case 1:
			PrintString("Strings1 comes after string2\n");
			break;
		default:
			break;
	}
}