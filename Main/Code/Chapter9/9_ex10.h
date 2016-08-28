#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

struct entry
{
	char word[15];
	char definition[50];
};

int p9_ex10(void);
int compareStrings(const char s1[], const char s2[]);
int lookup(struct entry dictionary[], const char search[], const int entries);
void dictionarySort(struct entry dictionary[], int count);
void dictionaryPrint(struct entry dictionary[], int count);
