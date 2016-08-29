#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

int p10_7(void);

struct entry
{
	int value;
	struct entry *next;
};