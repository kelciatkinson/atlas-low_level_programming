#include "function_pointers.h"

/**
 * array_iterator- here is a description
 *
 * @array: here is a parameter
 * @size: here is another parameter
 * @action: here is another parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	
		for (i = 0; i < size; i++)
		
			action(array[i]);
	}
}
