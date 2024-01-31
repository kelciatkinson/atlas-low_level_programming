#include <string.h>
#include "main.h"
/**
 * print_rev- here is the function
 *
 * @s: char
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	char *first = s;
	char *last = s + len - 1;

	for (len = 0; s[len] != '\0'; len++)
	{
		printf("%d\n", len);
	}

	while (first < last)
	{
		char swap = *first;
		*first = *last;
		*last = swap;
		first++;
		last--;
	}
	printf("%s\n", s);
}
