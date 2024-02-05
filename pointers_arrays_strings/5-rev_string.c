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
        int i = 0;
	int n = 0;

        while (i >= 0)
        {
                if (s[i] == '\0')
                {
                        break;
                }
                i++;
        }

        for (n = 0; n < (i - 1) ; i++)
        {
		for (x = n + 1; x > 0; x++)
		{
			swap = *(s + x);
			*(s + x) = *(s + (x - 1));
			*(s + (x - 1)) = swap;
		}
        }
}
