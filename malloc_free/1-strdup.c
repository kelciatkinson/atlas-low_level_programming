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
	char *newStr;
	int i;
	
	if (str == NULL)
		return (NULL);
	if (i = 0; i < str; i++)
		newStr = str[i];
	malloc(newStr);
	return(newStr);
	free(newStr);
}
