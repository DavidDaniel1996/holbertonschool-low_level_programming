#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}*/

	d->name = name;
	d->age = age;
	d->owner = owner;
}
