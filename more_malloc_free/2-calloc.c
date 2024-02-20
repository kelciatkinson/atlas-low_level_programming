#include "main.h"
#include <stdlib.h>

/**
 * _calloc- here is a description
 *
 * @nmemb: here is a parameter
 * @size: here is another parameter
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, j;

	j = nmemb * size;
	
	if (j <= 0)
		return (NULL);

	p = malloc(j);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}
	return(p);
}
