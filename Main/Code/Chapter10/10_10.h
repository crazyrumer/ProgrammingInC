#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

struct entry
{
	int value;
	struct entry * next;
};

int p10_10(void);
struct entry *findEntry(struct entry *listPtr, int match);
