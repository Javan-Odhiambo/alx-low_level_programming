#include "main.h"
#include <malloc.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the grid
 * @height: height of the grid.
 * Return: void
*/


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
