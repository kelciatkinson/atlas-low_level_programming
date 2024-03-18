#include "lists.h"

/**
 * get_dnodeint_at_index- here is a description
 *
 * @head: here is a parameter
 * @index: here is another parameter
 *
 * Return: nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		index--;
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
