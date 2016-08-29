//-----------------------------------------------------------------------------
// Programm 10.4 - Using Pointers to Structures
//-----------------------------------------------------------------------------
#include "10_4.h"

int p10_4(void)
{
	struct date today;
	struct date *datePtr;

	datePtr = &today;

	datePtr->month = 9;
	datePtr->day = 25;
	datePtr->year = 2015;

	printf("Today date is %i/%i/%i", datePtr->day, datePtr->month, datePtr->year);

	return 0;
}