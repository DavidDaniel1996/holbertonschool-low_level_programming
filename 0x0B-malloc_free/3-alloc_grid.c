#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **alloc_grid - returns pointer to allocated space, contains 2d array
 * @width: variable representing columns
 * @height: variable representing rows
 *
 * Return: '\0' if pointers null, ptr_2 otherwise
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr_2;
	int *ptr_1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr_2 = malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
	{
		ptr_1 = malloc(width * sizeof(int));
		if (ptr_2 ==  NULL)
		{
			free(ptr_1);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			if (ptr_1 == NULL)
			{
				while (x >= 0)
				{
					free(ptr_2[x]);
					free(ptr_2);
					x--;
				}
				return (NULL);
			}
			ptr_1[y] = 0;
		}
		ptr_2[x] = ptr_1;
	}
	return (ptr_2);
}
