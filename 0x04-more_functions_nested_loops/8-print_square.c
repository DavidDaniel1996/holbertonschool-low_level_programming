#include "main.h"

/**
 * print_square - prints a "size" by "size" square
 * @size: value determining dimensions of square
 *
 * Return: Void
 */

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
