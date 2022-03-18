#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that creates a new node at the end of the list
 * @head: address of node
 * @str: name given to fill node
 *
 * Return: pointer to address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
