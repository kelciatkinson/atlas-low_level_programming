#include "main.h"
#include <stdlib.h>

/**
 * array_range- here is a description
 *
 * @min: here is a parameter
 * @max: here is another parameter
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *array; 
	int i, n;

	n = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * n);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
