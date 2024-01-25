#include "main.h"

/**
 * more_numbers- here is the function
 *
 * Return: Void
 */

void more_numbers(void)
{
        char i = '0';
	int count = 1;
	for (count = 1; count < 11; count++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
        	_putchar('n');
	}
}
