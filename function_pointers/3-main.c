#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- here is a description
 *
 * @argc: here is a parameter
 * @argv: here is another parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[i])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*f == '/' || *f == '%') && (*f[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	c = f(a, b);
	
	printf("%d\n", c);
	return (0);
}
