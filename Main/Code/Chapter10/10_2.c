//-----------------------------------------------------------------------------
// Programm 10.2 - More pointer basics
//-----------------------------------------------------------------------------
#include "10_2.h"

int p10_2(void)
{
	char c = 'Q';
	char *char_pointer = &c;

	printf("%c %c\n",c, *char_pointer);

	c = '/';
	printf("%c %c\n", c, *char_pointer);

	*char_pointer = '(';
	printf("%c %c\n", c, *char_pointer);


	return 0;
}