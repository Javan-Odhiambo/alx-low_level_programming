#include "main.h"
#include <malloc.h>

/**
 * create_array - that creates an array of chars, and initializes it with a specific char.
 * @size: size of the array.
 * @c: character to initialize the array with.
 * Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	int i;

	char *arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
		return (arr);
	}

}