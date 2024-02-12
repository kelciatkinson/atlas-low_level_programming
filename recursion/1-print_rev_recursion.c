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
	if (*s == '\0')
        {
                _putchar('\n');
        }

        else
        {
                _putchar(*s);
                _print_rev_recursion(s + 1);
        }
}
