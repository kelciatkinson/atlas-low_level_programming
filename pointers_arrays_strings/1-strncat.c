#include "main.h"

/**
 *  _strncat- here is a function
 *
 *  @dest: here's a parameter
 *  @src: here's another parameter
 *  @n: bytes
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++, i++)
	{
		dest[i] = src[x];
	}

	dest[i] = '\0';
	
	return (dest);
}
