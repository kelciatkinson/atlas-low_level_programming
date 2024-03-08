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

	if (new == NULL)
	{
		printf("[0] (nil)");
	}
	while (new != NULL)
	{
		printf("[%d]\n", new->len);
		new = new->next;
		count++;
	}
	return (count);
}
