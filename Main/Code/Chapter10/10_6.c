//-----------------------------------------------------------------------------
// Programm 10.6 - Using Linked Lists
//-----------------------------------------------------------------------------
#include "10_6.h"

int p10_6(void)
{
	struct entry n1;
	struct entry n2;
	struct entry n3;
	int i;

	n1.value = 100;
	n2.value = 200;
	n3.value = 300;

	n1.next = &n2;
	n2.next = &n3;

	i = n1.next->value;
	printf("%i\n", i);

	printf("%i\n", n2.next->value);



	return 0;
}