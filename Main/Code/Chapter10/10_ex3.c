//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 3
//The function developed in exercise 2 only inserts an element after an existing 
// element in the list, thereby preventing you from inserting a new entry at the 
// front of the list.How can you use this same function and yet overcome this problem ? 
// (Hint: Think about setting up a special structure to point to the beginning of the list.)
//-----------------------------------------------------------------------------
#include "10_ex3.h"

int p10_ex3(void)
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
	insertFirst(&newEntry, &listStartPtr);
	printLinkedList(listStartPtr);

	return 0;
}

void insertEntry(struct entry *newEntity, struct entry *targetEntity)
{
	newEntity->next = targetEntity;
	targetEntity = newEntity;
}

void insertFirst(struct entry *newEntity, struct entry **head)
{
	newEntity->next = *head;
	*head = newEntity;
}

void printLinkedList(struct entry *entryPtr)
{
	while (entryPtr != (struct entry*) 0)
	{
		printf("Value = %i\n", entryPtr->value);
		entryPtr = entryPtr->next;
	}
}