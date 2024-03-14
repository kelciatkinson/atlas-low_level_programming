#include "lists.h"

/**
 * print_dlistint- here is a descriptionn
 *
 * @h: here is a parameter
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *new = h;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		count++;
	}
	return (count);
}
