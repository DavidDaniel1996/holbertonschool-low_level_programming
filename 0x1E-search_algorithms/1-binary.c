#include "search_algos.h"

/**
 * binary_search - matches value using binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to match
 *
 * Return: index of match, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t min = 0;
	size_t max = size - 1;
	size_t middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (min <= max)
	{
		printf("Searching in array: ");
		for (idx = min; idx <= max; idx++)
		{
			if (idx == max)
				printf("%i\n", array[idx]);
			else
				printf("%i, ", array[idx]);
		}

		middle = (min + max) / 2;
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			max = array[middle - 1];
		}
		else if (value > array[middle])
		{
			min = array[middle + 1];
		}
	}
	return (-1);
}
