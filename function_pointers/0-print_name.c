#include "main.h"

/**
 * print_name- here is a description
 *
 * @name: here is a parameter
 * @f: here is another parameter
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
