#include "lists.h"

/**
 * print_list- here is a description
 *
 * @h: here is a parameter
 *
 * Return: # of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		if (new->str == NULL)
			printf("[%d] (nil)\n", new->len);
		printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		count++;
	}
	return (count);
}
