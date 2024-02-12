#include "main.h"

/**
 * _print_rev_recursion- here is a description
 *
 * @s: here is a parameter
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
        {
		return;
        }

        else
        {
                _putchar(*s[i]);
                _print_rev_recursion(s - 1);
        }
}
