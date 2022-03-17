#include "lists.h"

/**
* list_len - returns amount of nodes
* @h: node
*
* Return: Returns amount of nodes
*/

size_t list_len(const list_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return ('\0');
	}

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
