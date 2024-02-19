#include "main.h"
#include <stdlib.h>

/**
 * _str_concat- here is a description
 *
 * @s1: here is a parameter
 * @s2: here is another parameter
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int lenstr = 0;
	if (s1 || s2 == 0)
	{
		return (0);
	}
	while (s1[lenstr] != '\0')
	{
		while (s2[lenstr] != '\0')
		{
			lenstr++;
		}
	}
	s1 = (char *)malloc((sizeof(chaar) * lenstr) + 1);
	
	while (i < lenstr)
	{
		s1[i] = s1[i] + s2[i];
		i++;
	}
	s1[lenstr] = '\0';
	return (s1);
}
