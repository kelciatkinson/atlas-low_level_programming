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
	int i, j, lenStr1, lenStr2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lenStr1 = 0; s1[lenStr1] != '\0'; lenStr1++)
	for (lenStr2 = 0; s2[lenStr2] != '\0'; lenStr2++)
	newString = (char *)malloc((sizeof(char) * (lenStr1 + lenStr2) + 1));
	if (newString == NULL)
		return (NULL);
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
