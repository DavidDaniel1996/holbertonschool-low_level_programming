#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list
 * @head: pointer to head node
 * @index: number of node to be returned
 *
 * Return: node to be returned
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int idx = 0;

	while (idx < index)
	{
		tmp = head->next;
		head = tmp;
		idx++;
	}

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
}
