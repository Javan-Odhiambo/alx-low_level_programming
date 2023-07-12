#include "search_algos.h"

/**
* binary_search - Searches for a number in an array using binary search.
* @array: array to search in.
* @size: size of the array.
* @value: Number to look for.
*
* Return: index of the number being looked for or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t middle;
    size_t i;

    if (!array || size == 0)
    {
        return (-1);
    }

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
        {
            printf("%d, ", *(array + i));
        }
        printf("%d\n", *(array + i));

        middle = (left + right) / 2;
        if (value < *(array + middle))
        {
            right = middle - 1;
        }
        else if (value > *(array + middle))
        {
            left = middle + 1;
        }
        else
        {
            return middle;
        }
    }

    return (-1);
}
