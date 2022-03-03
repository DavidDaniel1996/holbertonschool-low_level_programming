#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *malloc_checked - creates pointer that points to newly allocated memory
* @b: amount of memory to be allocated)
*
* Return: ptr
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
