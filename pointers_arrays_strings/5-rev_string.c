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

        while (i >= 0)
        {
                if (s[i] == '\0')
                {
                        break;
                }
                i++;
        }
	st = s;

        for (n = 0; n < (i - 1); i++)
        {
		for (x = n + 1; x > 0; x--)
		{
			swap = *(st + x);
			*(st + x) = *(st + (x - 1));
			*(st + (x - 1)) = swap;
		}
        }
}
