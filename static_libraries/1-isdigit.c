#include <stdio.h>
#include "main.h"

/**
 * _isdigit- here is the function
 *
 * @c: here is the paramater
 *
 * Return: 0
 */



int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
