#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: position to be deleted
 *
 * Return: 1 if succesful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *len_p = *head, *temp2;
	unsigned int i = 0, len = 0;

	while (len_p != NULL)
	{
		len_p = len_p->next;
		len++;
	}

	if (*head == NULL || index > (len - 1))
		return (-1);

	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		(*head)->prev = NULL;
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp2 = temp->prev;
	temp2->next = temp->next;
	if (temp->next != NULL)
	{
		temp2 = temp->next;
		temp2->prev = temp->prev;
	}
	free(temp);

	return (1);
}
