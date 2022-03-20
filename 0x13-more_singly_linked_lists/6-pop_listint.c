#include "lists.h"

/**
* pop_listint - deletes head node, returns node's data
* @head: pointer to head node
*
* Return: data stored inside node
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int store;

	store = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (store);
}
