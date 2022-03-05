#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: represents amount of elements in array
 * @size: represents byte size of the elemens in array
 *
 * Return: NULL if either variable 0 or malloc fails, ptr otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
