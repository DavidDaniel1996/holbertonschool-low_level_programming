#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 * @head: pointer to head node
 * @n: data inside node
 *
 * Return: Adress of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	if (new == NULL)
	{
		return (NULL);
	}

	return (new);
}
