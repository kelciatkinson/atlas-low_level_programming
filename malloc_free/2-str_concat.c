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
	int len, i, j;
	
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[lenStr1] != '\0')
	{
		lenStr1++;
	}
	while (s2[lenStr2] != '\0')
	{
		lenStr2++;
	}
	len = lenStr1 + lenStr2;
	newString = (char *)malloc((sizeof(char) * (len + 1)));

	if (newString == 0)
		return (0);

	for (i = 0; i < lenStr1; i++)
		newStrng[i] = s1[i];
	for (j = 0; j < lenStr2; j++, i++)
	{
		newString[i] = s2[j];
	}
	newString[len] = '\0';
	return (newString);
}
