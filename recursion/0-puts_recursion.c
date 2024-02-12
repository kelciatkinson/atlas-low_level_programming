#include "main.h"

/**
 * _puts_recursion- here is a description
 *
 * @s: here is a parameter
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
	}
}
