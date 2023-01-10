#include "main.h"
#include <malloc.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 * Return: pointer to a 2 dimensional array on success else NULL
*/


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr = (int **) malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		*(arr + i) = (int *) malloc(sizeof(int) * width);

	if (arr != NULL && *(arr) != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	}

	if (width < 1 || height < 1)
		arr = NULL;

	return (arr);
}
