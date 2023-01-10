#include "main.h"
#include <malloc.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/


char *_strdup(char *str)
{
	int size;
	int i;
	char *cpy;

	size = (str == NULL) ? 0 : strlen(str) + 1;

	cpy = (char *) malloc((sizeof(char) * size));

	if (cpy != NULL || str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(cpy + i) = *(str + i);
		}
		*(cpy + size) = '\0';
	}
	else
	{
		cpy = NULL;
	}
	return (cpy);
}
