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

	if (new == NULL && new->str == NULL)
		printf("[%d] (nil)", new->len)
	while (new != NULL)
	{
		printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		count++;
	}
	return (count);
}
