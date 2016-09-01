//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 8
// Write a function called sort3() to sort three integers into ascending order. 
// (This function is not to be implemented with arrays.)
//-----------------------------------------------------------------------------
#include "10_ex8.h"

int p10_ex8(void)
{
	int a = 1;
	int b = 0;
	int c = 3;

	printf("%i, %i, %i \n", a, b, c);
	sort3(&a, &b, &c);
	printf("%i, %i, %i \n", a, b, c);
	
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort3(int *a, int *b, int *c)
{
	if (*a > *b)
	{
		swap(a, b);
	}
	if (*a > *c)
	{
		swap(a, c);
	}
	if (*b > *c)
	{
		swap(b, c);
	}
}

