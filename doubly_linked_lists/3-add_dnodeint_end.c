#include "lists.h"

/**
 * add_dnodeint_end- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{	
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));


	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	return (new);
}
