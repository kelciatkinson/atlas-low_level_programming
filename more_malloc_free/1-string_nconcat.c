#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- here is a description
 *
 * @s1: here is a parameter
 * @s2: here is another parameter
 * @n: here is another parameter
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i])
	{
		i++;
	}

	str = malloc(sizeof(*str) * i + n + 1);

	if (str == NULL)
		return (NULL);

	for (j = 0; k = 0; j < (i + n); j++)
	{
	
	}

	str[j] = '\0';
	return (str);
