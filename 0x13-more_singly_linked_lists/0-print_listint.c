#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a list
 *@h: points to node
 *
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
