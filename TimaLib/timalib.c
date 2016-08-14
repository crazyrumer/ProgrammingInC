#include "timalib.h"
void HelloWorld()
{
	printf("Hello World");
}
 
void PrintString( char string[] )
{
	printf("%s",string);
}

int BinarySearch(int list[], int target, int count)
{
	int low		= 0;
	int high	= count - 1;
	int mid;

	for (;;)
	{
		if (low > high)
		{
			return -1; // target does not exist
		}

		mid = (low + high) / 2;

		if (list[mid] < target)
		{
			low = mid + 1;
		}

		if (list[mid] > target)
		{
			high = mid - 1;
		}

		if (list[mid] == target)
		{
			return mid;
		}
	}
}
