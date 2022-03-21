#include "lists.h"

/**
 * insert_nodeint_at_index - creates new node at index
 * @head: pointer to head node
 * @idx: position where new node will be created
 * @n: data to be stored inside new node
 *
 * Return: new node, or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head2;
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0;

	head2 = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (i < (idx - 1) && head2 != NULL)
	{
		tmp = head2->next;
		head2 = tmp;
		i++;
	}

	if (head2 == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = head2->next;
		head2->next = new;
		return (new);
	}
}
