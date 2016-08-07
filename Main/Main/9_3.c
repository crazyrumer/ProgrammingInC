//-------------------------------------------------------------
// Programm 9.3 - Concatenating character strings
//-------------------------------------------------------------
#include <stdio.h>
#include "9_3.h"

void concat(const char s1[], const char s2[], char s3[])
{
	int i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	int j = 0;
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';
}

int p9_3(void)
{
	const char s1[] = { "Test " };
	const char s2[] = { "Works" };
	char s3[32];

	concat(s1, s2, s3);
	printf( "%s" ,s3);
	return 0;
}