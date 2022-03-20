#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
