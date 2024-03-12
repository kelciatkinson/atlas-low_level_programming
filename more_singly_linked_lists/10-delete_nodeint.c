#include "lists.h"

/**
 * delete_nodeint_at_index- here is a description
 *
 * @head: here is a parameter
 * @index: here is another parameter
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delete;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (i < (index - 1))
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}

	delete = temp->next;

	temp->next = temp->next->next;

	free(delete);
	return (1);
}
