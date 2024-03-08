#include "lists.h"
#include <string.h>

/**
 * add_node- here is a description
 *
 * @head: here is a parameter
 * @str: here is another parameter
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = malloc(strlen(*head) + 1);
	new->str = malloc(strlen(str) + 1);

	if (new->len == NULL || new->str == NULL)
	{
		free(new->len);
		free(new->str);
		free(new);
		return (NULL);
	}

	strcpy(new->head, head);
	strcpy(new->str, str);
	
	new->next = *head;

	*head = new;
	
	return (*head);
}
