#include "lists.h"

/**
 * add_dnodeint- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	const int temp;
	dlistint_t *new;
	int len;

	new = malloc(sizeof(dlistint_t));

	temp = n;

	if (new == NULL)
		return (NULL);

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; n[len];)
		len++;

	new->n = temp;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
