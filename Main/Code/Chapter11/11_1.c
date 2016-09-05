//-----------------------------------------------------------------------------
// Programm 11.1 - The Bitwsie AND Operator
//-----------------------------------------------------------------------------
#include "11_1.h"

int p11_1(void)
{
	unsigned int word1 = 077u;
	unsigned int word2 = 0150u;
	unsigned int word3 = 0210u;

	printf("%o   ", word1 & word2);
	printf("%o   ", word1 & word1);
	printf("%o   ", word1 & word2 & word3);
	printf("%o\n", word1 & 1);



	return 0;
}