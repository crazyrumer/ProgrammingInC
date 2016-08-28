//-----------------------------------------------------------------------------
// Programm 10.1 - Illustrating pointers
//-----------------------------------------------------------------------------
#include "10_1.h"

int p10_1(void)
{
	int count = 10;
	int x;

	int *intPointer;

	intPointer = &count;
	x = *intPointer; // dereferencing

	printf("count = %i, x = %i", count, x);
	return 0;
}