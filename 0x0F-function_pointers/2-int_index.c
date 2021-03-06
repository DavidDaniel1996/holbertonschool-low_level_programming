#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: array being searched
 * @size: size of array
 * @cmp: pointer, points to function that compares integer
 *
 * Return: returns integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
		{
			return (count);
		}
	}
	if (count == size)
	{
		return (-1);
	}
	return (0);
}
