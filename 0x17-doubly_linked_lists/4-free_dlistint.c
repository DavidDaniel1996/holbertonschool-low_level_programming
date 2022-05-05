#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to head node
 * 
 * Return: void 
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}