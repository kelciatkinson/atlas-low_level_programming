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
	if (c >= 0 && c <= 9) {
		return (1);
	}
	else {
		return (0);
	}
}
