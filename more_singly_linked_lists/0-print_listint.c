#include "lists.h"

/**
 * print_listint- here is a description
 *
 * @h: here is a parameter
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%ld\n", count);
		temp = temp->next;
	}
	return (count);
}
