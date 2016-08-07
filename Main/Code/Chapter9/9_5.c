//-----------------------------------------------------------------------------
// Programm 9.5 - Reading Strings with scanf()
//-----------------------------------------------------------------------------
#include "9_5.h"

int p9_5(void)
{
	char s1[81];
	char s2[81];
	char s3[81];

	printf("Enter text:\n");

	scanf("%s%s%s", s1, s2, s3);

	printf("\ns1 = %s\ns2 = %s\ns3 = %s", s1, s2, s3);
	return 0;
}