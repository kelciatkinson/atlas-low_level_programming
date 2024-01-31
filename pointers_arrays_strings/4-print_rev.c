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
	int i = 0;
	
	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (--i; i >= 0 ;i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
