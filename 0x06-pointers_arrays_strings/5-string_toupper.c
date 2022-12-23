#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @hi: first string to be converted.
*
* Return: converted string.
*/

char *string_toupper(char *hi)
{
	int i = 0;

	while (hi[i] != '\0')
	{
		if (hi[i] >= 'a' && hi[i] <= 'z')
			hi[i] -= 32;
		i++;
	}
	return (hi);

}
