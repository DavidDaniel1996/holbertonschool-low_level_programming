#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at specified index
 * @head: pointer to head node
 * @index: position of node to be retrieved
 *
 * Return: node at index, NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int idx = 0;

	while (idx < index && head != NULL)
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
