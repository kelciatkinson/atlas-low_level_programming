#include "lists.h"

/**
 * get_nodeint_at_index- here is a description
 *
 * @head: here is a parameter
 * @index: here is another parameter
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
