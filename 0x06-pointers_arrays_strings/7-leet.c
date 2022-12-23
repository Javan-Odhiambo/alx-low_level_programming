#include "main.h"

/**
* leet -  encodes a string into 1337.
*
* @s: sentence to be capitalized.
*
* Return: encoded string.
*/

char *leet(char *s)
{
	int i, j;
	char ref[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ref[j] == *(s + i))
				*(s + i) = num[j];
		}
	}


	return (s);

}
