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
	int first, swap;
	int last = 0;

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
