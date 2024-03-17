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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));


	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
