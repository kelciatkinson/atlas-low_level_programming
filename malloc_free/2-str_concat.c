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
	char *newString;
	int lenStr1 = 0;
	int lenStr2 = 0;
	int i = 0;
	int j = 0;
	
	if (s1 == 0 || s2 == 0)
	{
		return (0);
	}
	while (s1[lenStr1] != '\0')
	{
		lenStr1++;
	}
	while (s2[lenStr2] != '\0')
	{
		lenStr2++;
	}

	newString = (char *)malloc((sizeof(char) * (lenStr1 + lenStr2 + 1)));

	if (newString == 0)
		return (0);

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