#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- here is a description
 *
 * @grid: here is a parameter
 * @height: here is another parameter
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
