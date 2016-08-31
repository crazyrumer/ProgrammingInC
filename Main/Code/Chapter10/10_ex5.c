//-----------------------------------------------------------------------------
// Chapter 10 - Exercise 5
// A doubly linked list is a list in which each entry contains a pointer to the 
// preceding entry in the list as well as a pointer to the next entry in the list.
// Define the appropriate structure definition for a doubly linked list entry and then 
// write a small program that implements a small doubly linked list and prints out the 
// elements of the list.
//-----------------------------------------------------------------------------
#include "10_ex5.h"

int p10_ex5(void)
{
	struct entry s1;
	struct entry s2;
	struct entry s3;

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

