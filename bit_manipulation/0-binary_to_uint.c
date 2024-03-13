#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint- here is a description
 *
 * @b: here is a parameter
 *
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = n * 2 + b[i] - '0';
	}
	return (n);
}
