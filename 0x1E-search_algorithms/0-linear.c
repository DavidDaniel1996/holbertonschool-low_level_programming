#include "search_algos.h"

/**
 * linear_search - finds value in array of integers using linear search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	for (idx = 0; idx < size && array != NULL; idx++)
	{
		printf("Value checked array[%li] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}

	return (-1);
}
