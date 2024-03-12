#include "lists.h"

/**
 * free_listint2- here is a description
 *
 * @head: here is a parameter
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	list_t *temp;

	while(head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}