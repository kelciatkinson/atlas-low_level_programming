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
	if (*s == '\0')
	{
		return (0);
	}
	
	else
	{
		return (_strlen_recursion(s + 1));
	}
	
}
