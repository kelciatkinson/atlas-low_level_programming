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
	int len = strlen(s);
	char *first = s;
	char *last = s + len - 1;

	while (first < last)
	{
		char swap = *first;
		*first = *last;
		*last = swap;
		first ++;
		last --;
	}
}
