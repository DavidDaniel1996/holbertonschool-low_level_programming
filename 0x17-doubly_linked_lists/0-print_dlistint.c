#include "lists.h"

/**
 * print_dlistint - prints data in node and returns number of nodes
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
