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
	int i = 0;
	int j = 0;
	int lenStr1, lenStr2;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			lenStr1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			lenStr2++;
	}
	newString = (char *)malloc((sizeof(char) * ((lenStr1 + lenStr2) + 1)));
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < lenStr1; i++)
	{
		newString[i] = s1[i];
	}
	for (j = 0; j < lenStr2; j++, i++)
	{
		newString[i] = lenStr2[i];
	}
	newString[lenStr1 + lenStr2] = '\0';
	return (newString);
}
