#include "lists.h"

/**
 * pop_listint- here is a description
 *
 * @head: here is a parameter
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head->next == NULL)
		return (0);
	temp = *head;

	i = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (i);
}
