#include "main.h"

/**
 * create_array- here is a description
 *
 * @size: here is a parameter
 * @c: here is another parameter
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char ar;
	unsigned int i;

	if (size == '\0')
		return (0);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar = malloc(size * sizeof(c));

	return(ar);
	free(ar);
}
