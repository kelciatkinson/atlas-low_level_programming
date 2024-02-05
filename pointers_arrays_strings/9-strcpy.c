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

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
		if ( ;*src == '\0'; )
		{
			break;
		}

	}
	return (dest);
}
