#include "lists.h"

/**
 * sum_dlistint- here is a description
 *
 * @head: here is a parameter
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
	}
	return (sum);
}
