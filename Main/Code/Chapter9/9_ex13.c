//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 13 
// If c is a lowercase character, the expression c – 'a' + 'A' produces the uppercase equivalent of c, 
// assuming an ASCII character set.Write a function called uppercase() that converts all lowercase 
// characters in a string into their uppercase equivalents.
//-----------------------------------------------------------------------------

#include "9_ex13.h"

int p9_ex13(void)
{
	printf("%c",uppercase('d'));
	return 0;
}

char uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}

	return c;
}

