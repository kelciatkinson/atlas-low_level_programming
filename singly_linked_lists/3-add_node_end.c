#include "lists.h"
#include <string.h>

/**
 * add_node_end- here is a description
 *
 * @head: here is a parameter
 * @str: here is another parameter
 *
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	list_t *new;
	list_t *last;
	int len;

	new = malloc(sizeof(list_t));

	temp = strdup(str);
	if (new == NULL)
		return (NULL);

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = temp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
