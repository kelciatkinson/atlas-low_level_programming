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
	char *newString[500];
	int i = 0;
	int j = 0;
	
	if (s1 || s2 == 0)
	{
		return (0);
	}
	while (s1[lenStr] != '\0')
	{
		while (s2[lenStr] != '\0')
		{
			lenStr++;
		}
	}
	newString = (char *)malloc((sizeof(char) * lenStr) + 1);

	while (s1[i] != '\0')
	{
		newString[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newString[j] = s2[i];
		i++;
		j++;
	}
	newString[j] = '\0';
	return (newString);
}
