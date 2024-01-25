#include "main.h"

/**
 * print_line- here is the function
 *
 * Return: Void
 */

void print_line(int n)
{
        int n = 0;
        char line = "_";
        for (n = 0)
	{
		line = line * n;
		_putchar(line);
        }
	_putchar('\n');
}

