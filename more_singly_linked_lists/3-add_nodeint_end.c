#include "lists.h"

/**
 * add_nodeint_end- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 *
 * Return: 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	while (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	return (new);
}
