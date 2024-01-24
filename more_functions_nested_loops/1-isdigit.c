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
	if (c >= 0)
		return (1);
	else if (c <= 9)
		return (1);
	else
		return (0);
}
