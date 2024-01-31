#include "main.h"

/**
 * puts2- here is the function
 *
 * @str: char
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}
	while (i < count)
	{
		printf("%c", str[i]);
		i++;
		i++;
	}
	putchar('\n');
}
