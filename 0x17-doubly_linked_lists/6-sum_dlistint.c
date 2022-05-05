#include "lists.h"

/**
 * sum_dlistint - returns sum of all intengers in list
 * @head: pointer to head node
 *
 * Return: sum of all intengers
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		tmp = head->next;
		head = tmp;
	}

	return (sum);
}
