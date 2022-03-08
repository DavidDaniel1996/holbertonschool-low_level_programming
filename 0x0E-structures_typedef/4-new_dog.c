#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t) + 1);

	name = malloc(strlen(ptr->name) * sizeof(char) + 1);
	owner = malloc(strlen(ptr->owner) * sizeof(char) + 1);

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);

	return (ptr);
}
