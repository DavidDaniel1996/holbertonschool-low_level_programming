#include "main.h"

void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	while (x < n)
	{
		_putchar('\\');
		_putchar('\n');
		x++;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		y = 0;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
