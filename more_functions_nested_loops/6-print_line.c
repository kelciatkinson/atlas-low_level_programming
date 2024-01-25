#include "main.h"

/**
 * print_line- here is the function
 *
 * Return: Void
 */

void print_line(int n)
{
        char line = "_";
        while (n)
	{
		line = line * n;
		_putchar(line);
        }
	_putchar('\n');
}

