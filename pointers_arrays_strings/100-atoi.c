#include "main.h"

/**
 * _atoi- here is a description
 *
 * @s: here is a parameter
 *
 * Return: n
 */

int _atoi(char *s)
{
	int i;
	int n = 0;
	int x = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			x = -1;
		}

		if (s[i] > 47 && s[i] < 58)
		{
			if (n < 0)
			{
				n = (n * 10) - (s[i] - '0');
			}
			else 
			{
				n = (s[i] - '0') * -1;
			}
			if (s[i + 1] < 48 || s[i + 1] > 57)
			break;
		}

	}

	if ( x < 0)
	{
		n *= -1;
	}

	return (n);
}
