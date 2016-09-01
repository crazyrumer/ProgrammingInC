//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 6
// Develop insertEntry() and removeEntry() functions for a doubly linked list that 
// are similar in function to those developed in previous exercises for a singly linked list.
// Why can your removeEntry() function now take as its argument a direct pointer to the entry
// to be removed from the list ?
// 
//-----------------------------------------------------------------------------
#include "10_ex6.h"

int p10_ex6(void)
{
	struct entry s1;
	struct entry s2;
	struct entry s3;

	struct entry newEntry1;
	struct entry newEntry2;

	struct entry *listPtr = &s1;

	s1.value = 100;
	s1.next = &s2;
	s1.previous = (struct entry*)0;

	s2.value = 200;
	s2.next = &s3;
	s2.previous = &s1;

	s3.value = 300;
	s3.next = (struct entry*)0;
	s3.previous = &s2;

	newEntry1.value = 1000;
	newEntry1.next = (struct entry*)0;
	newEntry1.previous = (struct entry*)0;

	newEntry2.value = 2000;
	newEntry2.next = (struct entry*)0;
	newEntry2.previous = (struct entry*)0;

	printList(listPtr);
	insertEntry(&newEntry1, &s1);
	printList(listPtr);
	removeEntry(&newEntry1);
	printList(listPtr);

	return 0;
}

void printList(struct entry* entry)
{
	while (entry != (struct entry*)0)
	{
		printf("%i ", entry->value);
		entry = entry->next;
	}
	printf("\n");
}

void insertEntry(struct entry* newEntry, struct entry* targetEntry)
{
	newEntry->previous = targetEntry;
	newEntry->next = targetEntry->next;
	targetEntry->next = newEntry;
}

void removeEntry(struct entry* entry)
{
	entry->previous->next = entry->next;
	entry->next->previous = entry->previous;
}
