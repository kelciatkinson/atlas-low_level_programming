#include "lists.h"

/**
 * free_listint- here is a description
 *
 * @head: here is a parameter
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
