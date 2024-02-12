#include "main.h"

/**
 * factorial- here is a description
 *
 * @n: here is a parameter
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
}
