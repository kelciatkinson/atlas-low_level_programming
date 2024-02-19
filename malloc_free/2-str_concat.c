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
	char newString;
	int lenstr = 0;
	int i = 0;
	int j = 0;
	
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
	newString = malloc((sizeof(char) * lenstr) + 1);
	
	while (i < lenstr)
	{
		newString[j] = s1[i];
		i++;
		j++;
	}
	while (s2[i] != '\0')
	{
		newString[j] = s2[i];
		i++;
		j++;
	}
	newString[j] = '\0';
	return (newString);
}
