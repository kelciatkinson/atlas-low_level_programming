#include "main.h"

/**
 * more_numbers- here is the function
 *
 * Return: Void
 */

void more_numbers(void)
{
        int i = 0;
	int count = 1;
	for (count = 1; count < 11; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				i = i / 10;
				_putchar(i + '0');
			}
			if (i >= 10)
			{
				i = i % 10;
				_putchar(i + '0');
			}
		}
        	_putchar('\n');
	}
}
