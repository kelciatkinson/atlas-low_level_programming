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
	int i = 0;
	int x = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (x >= 0)
	{
		*(dest + i) = *(src + x);
		if (*(src + x) == '\0')
		{
			break;
		}
		i++;
		x++;
	}
	return (dest);
}
