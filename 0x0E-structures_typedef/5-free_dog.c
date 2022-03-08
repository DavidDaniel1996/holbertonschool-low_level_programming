#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
