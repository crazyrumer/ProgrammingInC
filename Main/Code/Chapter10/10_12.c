//-----------------------------------------------------------------------------
// Programm 10.12 - Summing the Elements of an Array
//-----------------------------------------------------------------------------
#include "10_12.h"

int p10_12(void)
{
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf("The sum of values is %i\n", arraySum(values, 10));

	return 0;
}

int arraySum(int array[], const int n)
{
	int sum = 0;
	int *arrayEnd = array + n;
	for (; array < arrayEnd; array++)
	{
		sum += *array;
	}
	return sum;
}