#include "main.h"

/**
 * swap_int- here is the function
 *
 * @*a: pointer to an int a
 * @*b: pointer to an int b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = a;
	a = b;
	b = swap;
}
