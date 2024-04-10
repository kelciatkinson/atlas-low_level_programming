#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of integers using the Linear search algorithm
 * 
 * @array: pointer to the 1st element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * 
 * Return: the first index where value is located, or -1 if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}