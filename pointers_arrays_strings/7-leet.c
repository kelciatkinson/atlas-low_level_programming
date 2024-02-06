#include "main.h"

/**
 * leet- here's a description
 *
 * @s: here's a parameter
 *
 * Return: x
 */

char *leet(char *s)
{
	char *c = s;
	char n[] = { 'a', 'e', 'o', 't', 'l' };
	char x[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == n[i] - 32)
			{
				*s = x[i] + '0';
			}
		}
		s++;
	}
	return (x);
}
