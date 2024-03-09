#ifndef LISTS
#define LISTS

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
size_t print_listint(const listint_t *h);

#endif
