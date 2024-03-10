#include "lists.h"

/**
 * add_nodeint- here is a description
 *
 * @head: here is a parameter
 * @n: here is another parameter
 *
 * Return: 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	char *temp;
	listint_t *new;
	int len;

	new = malloc(sizeof(listint_t));

	temp = n;

	if (new == NULL)
		return (NULL);

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len])
		len++;

	new->str = temp;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
