#include "main.h"

/**
 * printi_most_numbers- here is the function
 *
 * Return: Void
 */

void print_most_numbers(void)
{
        char i = '0';

        for (i = '0'; i <= '9'; i++)
		if (i != 2 || i != 4)
        	{
                	_putchar(i);
        	}
        _putchar('\n');
}
