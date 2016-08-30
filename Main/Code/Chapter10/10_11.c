//-----------------------------------------------------------------------------
// Programm 10.11 - Working with Pointers to Array
//-----------------------------------------------------------------------------
#include "10_11.h"

int p10_11(void)
{
	int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

	printf("The sum of values is %i\n", arraySum(values, 10));

	return 0;
}

int arraySum(int array[], const int n)
{
	int sum = 0;
	int *ptr;
	int *arrayEnd = array + n;
	for (ptr = array; ptr < arrayEnd; ptr++ )
	{
		sum += *ptr;
	}
	return sum;
}