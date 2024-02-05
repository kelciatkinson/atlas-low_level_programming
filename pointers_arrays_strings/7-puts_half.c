#include "main.h"
/**
 * puts_half- here is the function
 *
 * @str: char
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;
	int n = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (n++; n < count; n++)
		putchar(str[n]);
	putchar('\n');
}
