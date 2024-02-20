#include "main.h"

/**
 * malloc_checked- here is a description
 *
 * @b: here is a parameter
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
