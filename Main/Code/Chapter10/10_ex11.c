//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 11
// Given the definition of a date structure as defined in this chapter, write a 
// function called dateUpdate() that takes a pointer to a date structure as its 
// argument and that updates the structure to the following day(see Program 8.4).
//-----------------------------------------------------------------------------
#include "10_ex11.h"

int p10_ex11(void)
{
	struct date d1 = { 31, 12, 2016 };

	PrintDate(d1);
	updateDate(&d1);
	PrintDate(d1);

	return 0;
}


void PrintDate(struct date date)
{
	printf("Date is %i/%i/%i \n",date.day, date.month, date.year);
}

void updateDate(struct date *datePtr)
{
	if (datePtr->day++)
	{
		if (datePtr->day > daysInMonth(datePtr->month, isLeapYear(datePtr->year)))
		{
			datePtr->day = 1;
			datePtr->month++;
		}
		if (datePtr->month > 12)
		{
			datePtr->month = 1;
			datePtr->year++;
		}
	}
}

int daysInMonth(int month, int isLeapYear)
{
	if (month == 2) // February
	{
		return 28 + isLeapYear;
	}
	else
	{
		return (31 - (month - 1) % 7 % 2);
	}
}

int isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0 &&
			year % 400 != 0)
		{
			return 0; // not leap year
		}

		return 1; // leap year
	}

	return 0; // not leap year
}