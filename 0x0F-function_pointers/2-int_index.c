#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: comparison function to be called on the elements of the array
 * Return: the index of the found integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
