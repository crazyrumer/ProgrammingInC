//-----------------------------------------------------------------------------
// Chapter 9 - Exercise 12 
// Write a function called strToFloat() that converts a character string into a floating - point value.
// Have the function accept an optional leading minus sign.So, the call
//
// strToFloat("-867.6921"); 
// 
// should return the value − 867.6921.
//-----------------------------------------------------------------------------

#include "9_ex12.h"

int p9_ex12(void)
{
	printf("%f\n", strToFloat("-867.6921"));
	return 0;
}

float strToFloat(const char string[])
{
	float result = 0;
	int intValue = 0;
	int decimalValues = 0;
	bool isDecimal = false;
	bool isNegative = false;
	for (int i = 0; i < string[i] != '\0'; i++)
	{
		if (string[i] == '-')
		{
			isNegative = true;
			continue;
		}

		if (string[i] == '.')
		{
			isDecimal = true;
			continue;
		}

		if (string[i] >= '0' && string[i] <= '9' )
		{
			intValue = string[i] - '0';

			if (!isDecimal)
			{
				result = result * 10 + intValue;
			}
			else
			{
				decimalValues++;
				float value = (float)intValue;
				for (int j = 0; j < decimalValues; j++)
				{
					value = value * 0.1F;
				}
				result += value;
			}
		}
	}

	return(isNegative) ? result * -1 : result;
}


