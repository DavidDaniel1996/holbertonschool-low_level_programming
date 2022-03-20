#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that creates a new node with data given
 * @head: pointer to address of head node
 * @n: data for node
 *
 * Return: pointer to address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	if (head == NULL)
	{
		return (NULL);
	}

	return (new);
}
