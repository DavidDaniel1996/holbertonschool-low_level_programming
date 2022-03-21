#include "lists.h"

/**
 * sum_listint - sums all the data of a list
 * @head: pointer to head node
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int store = 0;

	if (head == NULL)
	{
		return ('\0');
	}

	while (head != NULL)
	{
		store += head->n;
		tmp = head->next;
		head = tmp;
	}
	return (store);
}
