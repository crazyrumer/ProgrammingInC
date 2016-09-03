#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

int p10_ex11(void);

struct date 
{	
	int day;
	int month;
	int year;
};

void PrintDate(struct date date);
int daysInMonth(int month, int isLeapYear);
int isLeapYear(int year);
void updateDate(struct date *datePtr);
