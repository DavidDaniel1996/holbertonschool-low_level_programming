#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints ellements of a node
 * @h: pointer to a node
 *
 * Return: Amount of nodes printed
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return ('\0');
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			counter++;
		}
		h = h->next;
	}
	return (counter);
}
