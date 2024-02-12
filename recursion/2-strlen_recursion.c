#include "main.h"

/**
 * _strlen_recursion- here is a description
 *
 * @s: here is a parameter
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		i++;
	}
	return i;
}
