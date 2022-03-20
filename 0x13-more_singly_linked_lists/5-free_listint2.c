#include "lists.h"

/**
 * free_listint2 - frees list, sets head to NULL
 * @head: pointer to head node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	if (head == NULL)
	{
		return;
	}
}
