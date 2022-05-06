#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *temp, *temp2;
    unsigned int i = 1;

    new = malloc(sizeof(dlistint_t));
    temp = *h;

    if (idx == 0)
    {
        new = add_dnodeint(h, n);
        return (new);
    }
    
    while (i < idx)
    {
        temp = temp->next;
        i++;
    }
    temp2 = temp;
    new->n = n;
    new->next = temp->next;
    temp2 = temp->next;
    new->prev = temp2->prev;
    temp->next =new;
    temp2->prev = new;

    return (new);
}