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
	int idx;
	int min = 0;
	int max = size - 1;
	int middle;

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
			max = middle - 1;
		}
		else if (value > array[middle])
		{
			min = middle + 1;
		}
	}
	return (-1);
}
