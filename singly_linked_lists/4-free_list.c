#include "lists.h"
#include <stdlib.h>

/**
 * free_list- here is a description
 * 
 * @head: here is a parameter
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
	}
}
