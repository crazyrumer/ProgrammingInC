#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "../../../TimaLib/timalib.h"

int p9_ex8(void);
void insertString(char string[], char substring[], int startIndex);
int strLength(char string[]);
void removeString(char text[], int startIndex, int numberToRemove);
int findString(char target[], char search[]);
void replaceString(char source[], char target[], char replacement[]);