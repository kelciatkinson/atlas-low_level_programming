#include "lists.h"

/**
 * free_dlistint- here is a description
 *
 * @head: here is a parameter
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
