#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: variable determining amount of lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	while (x < n)
	{
		_putchar('\\');
		x++;
		if (x == n)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
		}
		y = 0;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
