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
	char *ar;

	if (size == '\0')
		return (0);
	ar = malloc(size * sizeof(c));

	char array[ar];

	return(array);
	free(ar);
	free(array);
}
