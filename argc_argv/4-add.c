#include "main.h"

/**
 * main- here is a description
 *
 * @argc: here is an argument
 * @argv: here is another argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count = 0;
	int sum;
	int atoi;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (count < argc)
		{
			count++;
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d", sum);
	return(0);
}
