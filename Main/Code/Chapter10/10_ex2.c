//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 2
// Write a function called insertEntry() to insert a new entry into a linked list. 
// Have the procedure take as arguments a pointer to the list entry to be inserted 
// (of type struct entry as defined in this chapter), and a pointer to an element 
// in the list after which the new entry is to be inserted.
//-----------------------------------------------------------------------------
#include "10_ex2.h"

int p10_ex2(void)
{
	struct entry s1;
	struct entry s2;
	struct entry s3;

	struct entry newEntry;
	
	struct entry *listStartPtr = &s1;

	s1.value = 100;
	s1.next = &s2;

	s2.value = 200;
	s2.next = &s3;

	s3.value = 300;
	s3.next = (struct entry*) 0;

	newEntry.value = 1000;
	newEntry.next = (struct entry*) 0;

	printLinkedList(listStartPtr);
	PrintString("\n");
	insertEntry(&newEntry, &s2);
	printLinkedList(listStartPtr);

	return 0;
}

void insertEntry(struct entry *newEntity, struct entry *targetEntity)
{
	newEntity->next = targetEntity->next;
	targetEntity->next = newEntity;
}

void printLinkedList(struct entry *entryPtr)
{
	while (entryPtr != (struct entry*) 0)
	{
		printf("Value = %i\n", entryPtr->value);
		entryPtr = entryPtr->next;
	}
}