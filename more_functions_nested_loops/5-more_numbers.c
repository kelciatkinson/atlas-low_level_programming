#include "main.h"

/**
 * more_numbers- here is the function
 *
 * Return: Void
 */

void more_numbers(void)
{
        char i = '0';

        for (i = '0'; i <= '9'; i++)
        {
                i = i * 10;
		_putchar(i);
        }
        _putchar('n');
}
