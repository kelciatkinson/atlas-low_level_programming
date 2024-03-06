#include "lists.h"

/**
 * list_len- here is a description
 *
 * @h: here is a parameter
 *
 * Return: # of elements in linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
