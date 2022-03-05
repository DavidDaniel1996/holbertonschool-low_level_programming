#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum amount of elements in array
* @max: maximum amount of elements in array
*
* Return: null if min > max or malloc fails, pointer otherwise
*/

int *array_range(int min, int max)
{
	int *ptr;
	int count;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min;

	if (size < 0)
	{
		size = size * -1;
	}
	if (size == 0)
	{
		size = size + 1;
	}

	ptr = malloc(size * sizeof(int) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		ptr[count] = min;
		min++;
		if (min == max)
		{
			break;
		}
	}
	return (ptr);
}
