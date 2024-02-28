#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- here is a description
 *
 * @format: here is a parameter
 * 
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *ch;
	va_list valist;
	unsigned int i = 0;
	unsigned int n;

	while (format != NULL)
	{
		va_start(valist, format);
		while (format[i] != 0)
		{
			n = 1;
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(valist, int));
				break;
				case 'i':
				printf("%d", va_arg(valist, int));
				break;
				case 'f':
				printf("%f", va_arg(valist, double));
				break;
				case 's':
				ch = va_arg(valist, char *);
				if (ch == 0)
				ch = "(nil)";
				printf("%s", ch);
				break;
				default:
				n = 0;
				break;
			}
			if (format[i + 1] && n)
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
