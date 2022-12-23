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
	int i = 0, j = 0;
	char *ref = "aAeEoOtTlL\0";
	char *rep = "4433007711\0";

	for (; s[i] != '\0'; i++)
	{
		for (; ref[j] != '\0'; j++)
		{
			if (ref[j] == s[i])
				s[i] = rep[j];
		}
	}


	return (s);

}
