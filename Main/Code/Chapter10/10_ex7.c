//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 7
// Write a pointer version of the sort() function from Chapter 7, “Working with Functions.” 
// Be certain that pointers are exclusively used by the function, including index variables in the loops.
//-----------------------------------------------------------------------------
#include "10_ex7.h"

int p10_ex7(void)
{
	int i;
	int array[16] = { 34, -5,  6,  0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17,  22,  6, 11 };

	int count = sizeof(array) / sizeof(i);

	printArray(array, count);
	sort(array, count);
	printArray(array, 16);
	return 0;
}

void sort(int *array, int n)
{
	int *i;
	int *j;
	int temp;

	for (i = array; i < array + n-1; i++)
	{
		for ( j = i + 1; j < array + n; j++)
		{
			if (*i > *j)
			{
				temp = *i;
				*i = *j;
				*j = temp;
			}
		}
	}
}

void printArray(int array[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
}
