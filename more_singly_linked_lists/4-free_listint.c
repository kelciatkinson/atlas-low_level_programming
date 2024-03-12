#include "lists.h"

/**
 * free_listint- here is a description
 *
 * @head: here is a parameter
 *
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
	}
}
