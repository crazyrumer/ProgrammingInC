//-----------------------------------------------------------------------------
// Programm 10.8 - Using Pointers in Functions
//-----------------------------------------------------------------------------
#include "10_8.h"

int p10_8(void)
{
	int i = 50;
	int *p = &i;

	printf("Before the call to test %i\n", i);
	test(p);

	printf("After the call to test %i\n", i);


	return 0;
}

void test(int *int_pointer)
{
	*int_pointer = 100;
}