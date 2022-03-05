#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *array_range: creates an array of integers
* @min: minimum amount of elements in array
* @max: maximum amount of elements in array
*
* Return: null if min > max or malloc fails, pointer otherwise
*/

int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(max * sizeof(int) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < max; count++)
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
