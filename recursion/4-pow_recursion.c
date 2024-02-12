#include "main.h"

/**
 * _pow_recursion- here is a description
 *
 * @x: here is a parameter
 * @y: here is another paramater
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
