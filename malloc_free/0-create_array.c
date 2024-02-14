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
		ar = (char*)malloc(size * sizeof(c));
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	}
	ar[i] = '\0';
	return(ar);
}
