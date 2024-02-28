#include "function_pointers.h"

/**
 * int_index- here is a description
 *
 * @array: here is a parameter
 * @size: here is another parameter
 * @cmp: here is another parameter
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;
	
	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
