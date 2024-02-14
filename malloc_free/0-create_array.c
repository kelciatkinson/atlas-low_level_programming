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
	char *ar = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	if (size != 0)
	{
		ar = malloc(size * sizeof(c));
		if (ar != NULL)
		{
			while (i < size)
			{
				ar[i] = c;
				i++;
			}
		}
	}
	return (ar);
}
