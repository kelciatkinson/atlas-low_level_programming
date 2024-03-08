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
	char *temp;
	list_t *new;
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

	
	new->str = temp;
	new->len = len;
	new->next = *head;

	*head = new;
	
	return (*head);
}
