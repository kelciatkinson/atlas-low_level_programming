#include "main.h"

/**
 * _sqrt_recursion- here is a description
 * square- here is another function
 *
 * @n: here is a parameter
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (square(n, 1));
	}
}

int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (square(n, i + 1));
	}
}
