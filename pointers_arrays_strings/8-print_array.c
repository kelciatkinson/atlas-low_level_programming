#include "main.h"
#include <stdio.h>

/**
 * print_array- here is the description
 * @a: a parameter
 * @n: another parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
