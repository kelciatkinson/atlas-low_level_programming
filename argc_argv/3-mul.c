#include "main.h"

/**
 * main- here is a description
 *
 * @argc: here is an argument
 * @argv: here is another argument
 *
 * Return: 0
 */

int main(int  argc, char **argv)
{
	int n;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (0);
}
