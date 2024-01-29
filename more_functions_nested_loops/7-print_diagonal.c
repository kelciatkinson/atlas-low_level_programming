#include "main.h"

/**
 * print_diagaonals- here is a function
 *
 * @n: description
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int space;
	int slash;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space < n; space++)
		{
			for (slash = 0; slash < space; slash++)
			{
				_putchar(32);
			}
			_putchar(92);
		}
	}
}
