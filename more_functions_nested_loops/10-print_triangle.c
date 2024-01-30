#include "main.h"

/**
 * print_triangle- here is a description
 *
 * @size: here is a parameter
 *
 * Return: 0
 */

void print_triangle(int size);
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		for (size = 0; i <= size; i++)
		{
			_putchar(35);
		}
	}
}
