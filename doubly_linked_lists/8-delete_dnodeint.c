#include "lists.h"

/**
 * delete_dnodeint- here is a description
 *
 * @head: here is a parameter
 * @index: here is another parameter
 *
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		index--;
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	return (1);
}
