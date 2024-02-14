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
	int lenstr;
	int lendup;

	if (str == 0)
		return (0);
	dup = str;
	lenstr = strlen(str); 
	lendup = strlen(dup);
	while (lendup < lenstr)
	{
		dup = malloc((sizeof(char) * lenstr) + 1);
		lendup++;
	}
	return (*dup);
}
