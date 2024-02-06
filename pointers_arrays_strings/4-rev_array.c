#include "main.h"

/**
 * reverse_array- here's a description
 *
 * @a: here's a parameter
 * @n: here's another
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int x = 0;

	n = n - 1;
	while (x <= n)
	{
		i = a[x];
		a[x++] = a[n];
		a[n--] = i;
	}
}
