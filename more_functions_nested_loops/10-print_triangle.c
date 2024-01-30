#include "main.h"

/**
 * print_triangle- here is a description
 *
 * @size: here is a parameter
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (space = size - i; space > 1; space--)
			{
				_putchar(32);
			}
			for (hash = 0; hash <= i;  hash++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
