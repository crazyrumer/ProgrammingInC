#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

struct entry
{
	int value;
	struct entry *next;
};

int p10_ex2(void);
void insertEntry(struct entry *newEntity, struct entry *targetEntity);
void printLinkedList(struct entry *entryPtr);
