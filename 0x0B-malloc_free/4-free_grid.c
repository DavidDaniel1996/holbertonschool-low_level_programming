#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - frees memory allocated for grid created
 * @grid: points to 2d array
 * @height: position in 2d array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
