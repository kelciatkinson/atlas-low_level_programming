#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase letters
 *
 * @c: letter being tested
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
