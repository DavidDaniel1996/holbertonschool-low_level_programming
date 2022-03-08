#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
	free(d->name);
	free(d->owner);
}
