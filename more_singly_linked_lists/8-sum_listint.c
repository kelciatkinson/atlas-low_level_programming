#include "lists.h"

/**
 * sum_listint- here is a description
 *
 * @head: here is a parameter
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
