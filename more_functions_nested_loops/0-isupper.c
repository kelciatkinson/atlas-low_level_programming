#include "main.h"
#include <stdio.h>

/**
 * main - check for uppercase letters
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
