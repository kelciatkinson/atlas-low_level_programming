#include "main.h"

/**
 * main- here is a function
 *
 * @argc: here is a parameter
 * @argv: here is another parameter
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
