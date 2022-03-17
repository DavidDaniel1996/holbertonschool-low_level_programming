#include "lists.h"
#include <string.h>

/**
 * add_node - function that creates a new node with data given
 * @head: address of node 
 * @str: name given to fill node
 *
 * Return - pointer to address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
