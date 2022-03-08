#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - prints name, age and owner of good boi
 * @d: pointer
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	d->name == NULL ?  printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	/*d->age == '\0' ?  printf("Age: (nil)\n") : printf("Age: %f\n", d->age);*/
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
