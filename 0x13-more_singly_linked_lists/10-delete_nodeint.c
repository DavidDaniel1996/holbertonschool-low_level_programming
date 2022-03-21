#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nth node
 * @head: pointer to head node
 * @index: node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *head2;
	unsigned int idx = 0;

	head2 = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (idx < index - 1 && head2 != NULL)
	{
		tmp = head2->next;
		head2 = tmp;
		idx++;
	}

	if (head2 == NULL)
	{
		return (-1);
	}
	else
	{
		tmp = tmp->next;
		head2->next = tmp->next;
		free(tmp);
		return (1);
	}
}
