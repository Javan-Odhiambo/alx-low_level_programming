#include "search_algos.h"

/**
* linear_search - Searches for a number in an array.
* @array: array to search in.
* @size: size of the array.
* @value: Number to look for.
*
* Return: first index of the number being looked for or -1 if not found.
*/
int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (!array || size == 0)
    {
        return (-1);
    }

    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%ld] = [%d]\n", index, *(array + index));
        if (*(array + index) == value)
        {
            return (index);
        }
    }

    return (-1);
}
