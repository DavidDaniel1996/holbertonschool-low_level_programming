#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return ('\0');
	}

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
