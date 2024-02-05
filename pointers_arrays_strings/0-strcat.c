#include "main.h"

/**
 *
 * _strcat- here is a description
 *
 * @dest: here is the first parameter
 * @src: here is the second parameter
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		break;
	}

	for (x = 0 ; src[x] != '\0' ; x++)
	{
	dest[i] = src[x];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
