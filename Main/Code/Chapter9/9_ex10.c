//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 10 
// Write a function called dictionarySort() that sorts a dictionary, 
// as defined in Programs 9.9 and 9.10, into alphabetical order.
//-----------------------------------------------------------------------------

#include "9_ex10.h"

int p9_ex10(void)
{
	struct entry dictionary[100] =
	{
		{ "hello",		"the way to greet people" },
		{ "watermelon", "fruit russian love" },
		{ "america",	"country with guns" },
		{ "borsht",		"russian soup" },
		{ "cold",		"adjective describing low temperature" },
		{ "situations", "place and time" },
		{ "egg",		"things which come out of a chicked" },
		{ "silver",		"not gold" },
		{ "dew",		"hanve no idea" },
		{ "code",		"thing we do for fun" },
	};

	int  count = 10;
	dictionaryPrint(dictionary, count);
	dictionarySort(dictionary, count);
	dictionaryPrint(dictionary, count);
	return 0;
}

int compareStrings(const char s1[], const char s2[])
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

int lookup(struct entry dictionary[], const char search[], const int entries)
{
	int result = 0;
	int mid = 0;
	int low = 0;
	int high = entries;

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

void dictionarySort(struct entry dictionary[], int count)
{
	bool isSwapped = false;
	struct entry cache;
	for (;;)
	{
		isSwapped = false;
		for (int i = 0; i < count - 1; i++)
		{
			int result = compareStrings(dictionary[i].word, dictionary[i + 1].word);
			if (result == 1)
			{
				cache = dictionary[i];
				dictionary[i] = dictionary[i + 1];
				dictionary[i + 1] = cache;
				isSwapped = true;
			}
		}

		if (!isSwapped)
		{
			break;
		}
	}	
}

void dictionaryPrint(struct entry dictionary[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%s", dictionary[i].word);
		PrintString("              ");
		printf("%s", dictionary[i].definition);
		PrintString("\n");
	}
	PrintString("\n");
}

