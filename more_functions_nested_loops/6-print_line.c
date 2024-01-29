#include <stdio.h>
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
		int i = 0;

		for (int i; i <= n; i++)
		{
			_putchar(line);
			i += 1;
		}
		_putchar('\n');
        }
}

