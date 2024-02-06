#include "main.h"

/**
 * *_strncat- here is a description
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
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
			break;
		i++;
		x++;
	}
	return (dest);
}
