#include "main.h"
#include <stdio.h>

/**
 * _strcpy- here is a description
 *
 * @dest: here is a parameter
 * @src: another parameter
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
