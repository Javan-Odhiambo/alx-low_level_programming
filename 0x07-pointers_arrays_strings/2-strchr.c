#include "main.h"
#include <stddef.h>

/**
 * _strchr - looks for a given character in a string.
 *
 *@s: string to be searched.
 *@c: character to be located.
 *Return: Pointer to first occurence of the character on success.
 *Else returns NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
