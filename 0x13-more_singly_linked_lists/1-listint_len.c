#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in a list
 *@h: points to node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
