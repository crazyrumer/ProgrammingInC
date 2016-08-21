//-----------------------------------------------------------------------------
// Programm 9.10 - Modifying the Dictionary Lookup Using Binary Search
//-----------------------------------------------------------------------------
#include "9_10.h"

int p9_10(void)
{
	const struct entry dictionary[100] =
	{
		{ "aardvark",	"a burrowing African mammal" },
		{ "abyss",		"a bottomless pit" },
		{ "acumen",		"mentally sharp; keen" },
		{ "addle",		"to become confused" },
		{ "aerie",		"a high nest" },
		{ "affix",		"to append; attach" },
		{ "agar",		"a jelly made from seaweed" },
		{ "ahoy",		"a nautical call of greeting" },
		{ "aigrette",	"an ornamental cluster of feathers" },
		{ "ajar",		"partially opened" },
	};

	char word[10];
	int entries = 10;
	int entry;

	printf("Enter word: ");
	scanf("%14s", word);
	entry = lookup(dictionary, word, entries);
	if (entry != -1)
	{
		printf("%s\n", dictionary[entry].definition);
	}
	else
	{
		printf("Sorry, the word %s is not found in my dictionary.\n", word);
	}
	return 0;
}


int compareStrings (const char s1[], const char s2[])
{
	int i = 0;
	for (;;)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
			{
				return 0; // word found
			}
			i++;
		}

		if (s1[i] > s2[i])
		{
			return 1;
		}

		if (s1[i] < s2[i])
		{
			return -1;
		}
	}
}

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
	int result	= 0;
	int mid		= 0;
	int low		= 0;
	int high	= entries;

	for (;;)
	{
		if (low > high)
		{
			return -1; // the word does not exist
		}
		mid = (low + high) / 2;
		result = compareStrings(search, dictionary[mid].word);
		if (result == 0)
		{
			return mid;  // word found
		}
		if (result == 1)
		{
			low = mid + 1;
		}
		if (result == -1)
		{
			high = mid - 1;
		}
	}
}
