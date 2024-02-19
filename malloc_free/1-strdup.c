#include "main.h"

/**
 * _strdup- here is a description
 *
 * @str: here is a parameter
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *dup;
	int lenstr = 0;
	int i = 0;

	if (str == 0)
		return (0);
	while (str[lenstr] != '\0')
	{
		lenstr++;
	}
	dup = (char *)malloc((sizeof(char) * lenstr) + 1);
	while (i < lenstr)
	{
		dup[i] = str[i];
		i++;
	}
	dup[lenstr] = '\0';
	return (dup);
}
