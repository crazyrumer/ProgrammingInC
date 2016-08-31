//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 4
// Write a function called removeEntry() to remove an entry from a linked list.
// The sole argument to the procedure should be a pointer to the list.Have the function 
// remove the entry after the one pointed to by the argument. (Why can’t you remove the 
// entry pointed to by the argument ? ) You need to use the special structure you set up 
// in exercise 3 to handle the special case of removing the first element from the list.
//-----------------------------------------------------------------------------
#include "10_ex4.h"

int p10_ex4(void)
{
	struct entry s1;
	struct entry s2;
	struct entry s3;

	struct entry newEntry1;
	struct entry newEntry2;

	struct entry *listStartPtr = &s1;

	s1.value = 100;
	s1.next = &s2;

	s2.value = 200;
	s2.next = &s3;

	s3.value = 300;
	s3.next = (struct entry*) 0;

	newEntry1.value = 1000;
	newEntry1.next = (struct entry*) 0;

	newEntry2.value = 2000;
	newEntry2.next = (struct entry*) 0;

	printLinkedList(listStartPtr);
	insertFirst(&newEntry1, &listStartPtr);
	printLinkedList(listStartPtr);
	insertEntry(&newEntry2, &s2);
	printLinkedList(listStartPtr);
	removeEntry(&s2);
	printLinkedList(listStartPtr);
	removeFirst(&listStartPtr);
	printLinkedList(listStartPtr);

	return 0;
}

void insertEntry(struct entry *newEntry, struct entry *targetEntry)
{
	newEntry->next = targetEntry->next;
	targetEntry->next = newEntry;
}

void removeEntry(struct entry *entry)
{
	entry->next = entry->next->next;
}

void insertFirst(struct entry *newEntry, struct entry **head)
{
	newEntry->next = *head;
	*head = newEntry;
}

void removeFirst(struct entry **head)
{
	struct entry* headPtr = *head;
	headPtr = headPtr->next;
	*head = headPtr;
}

void printLinkedList(struct entry *entryPtr)
{
	while (entryPtr != (struct entry*) 0)
	{
		printf("Value = %i ", entryPtr->value);
		entryPtr = entryPtr->next;
	}
	printf("\n");
}