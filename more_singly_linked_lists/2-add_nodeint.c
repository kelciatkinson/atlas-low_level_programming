#include "lists.h"

/**
 * add_nodeint- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 *
 * Return: new
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	while (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
