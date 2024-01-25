#include "main.h"

/**
 * print_line- here is the function
 *
 * Return: Void
 */

void print_line(int n)
{
        char line = '_';

        if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(line * n);
        }
	_putchar('\n');
}

