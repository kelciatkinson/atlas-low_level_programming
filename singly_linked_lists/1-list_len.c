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

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
