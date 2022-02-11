#include "main.h"

/**
 * print_triangle - prints triangle relative to variable
 * @size: determines amount of spaces and # printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (z = x; z > 0; z--)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
