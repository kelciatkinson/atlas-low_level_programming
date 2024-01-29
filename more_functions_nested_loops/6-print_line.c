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
	int i = 0;

        if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i; i <= n; i++)
		{
			_putchar(line);
			i += 1;
		}
		_putchar('\n');
        }
}

