#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements of array
 * @array: pointer, points to array
 * @size: size of array
 * @action: pointer, points to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
