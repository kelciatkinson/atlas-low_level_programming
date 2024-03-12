#include "lists.h"

/**
 * insert_nodeint_at_index- here is a description
 *
 * @head: here is a parameter
 * @idx: here is another parameter
 * @n: here is another parameter
 *
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *add_node;
	unsigned int i = 0;

	if (*head == NULL && idx)
		return (NULL);

	if (idx == 0)
	{
		add_node = add_nodeint(&(*head), n);
		return (add_node);
	}

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;

	while (i < (idx - 1))
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	add_node->next = temp->next;

	temp->next = add_node;

	return (add_node);
}

/**
 * add_nodeint- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
