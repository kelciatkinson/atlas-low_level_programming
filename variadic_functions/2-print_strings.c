#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- here is a description
 *
 * @n: here is a parameter
 * @separator: here in another paramater
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *ch;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(valist, char*);
		if (j == NULL)
			printf("(nil)");
		else printf("%s", ch);
			printf("%s", ch);
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
	va_end(valist);
	printf("\n");
}
