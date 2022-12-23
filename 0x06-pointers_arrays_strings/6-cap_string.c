#include "main.h"

/**
* cap_string -  capitalizes all words of a string.
*
* @hi: sentence to be capitalized.
*
* Return: Capilalized string.
*/

char *cap_string(char *hi)
{
	int i = 0;

	while (hi[i + 1] != '\0')
	{
		switch (hi[i])
			case ' ':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
				if (hi[i + 1] >= 'a' && hi[i + 1] <= 'z'))
					hi[i + 1] -= 32;
		i++;
	}
	return (hi);

}
