#include <string.h>
#include "main.h"
/**
 * rev_string- here is the function
 *
 * @s: char
 * Return: void
 */

void rev_string(char *s)
{
        int i = 0, n, x;
	char *st;
	char swap;
	while (*(s + last) != '\0')
	{
		last++;
	}

	last -= 1;
	first = 0;

	while (last > first)
	{
		swap = s[first];
		s[first] = s[last];
		s[last] = swap;
		first++;
		last--;
	}
}
