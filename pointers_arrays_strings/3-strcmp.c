#include "main.h"

/**
 * _strcmp- here's a description
 *
 * @s1: here's a parameter
 * @s2: here's another
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	x = s1[i] - s2[i];

	return (x);
}
