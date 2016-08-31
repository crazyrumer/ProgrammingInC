#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

struct entry
{
	int value;
	struct entry *next;
};

int p10_ex4(void);
void insertEntry(struct entry *newEntry, struct entry *targetEntry);
void printLinkedList(struct entry *entryPtr);
void insertFirst(struct entry *newEntry, struct entry **head);
void removeEntry(struct entry *entry);
void removeFirst(struct entry **head);
