#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

struct entry
{
	int value;
	struct entry *next;
	struct entry *previous;
};

int p10_ex5(void);
void printList(struct entry* entry);