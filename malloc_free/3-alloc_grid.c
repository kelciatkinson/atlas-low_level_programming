#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- here is a description
 *
 * @width: here is a parameter
 * @height: here is another parameter
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **2dArr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	2dArr = (int **)malloc(sizeof(int *) * height);
	
	if (2dArr == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		2dArr[i] = (int *)malloc(sizeof(int) * width);
		if (2dArr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(2dArr[i]);
			free(2dArr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			2dArr[i][j] = 0;
	}
	return (*2dArr);
}
