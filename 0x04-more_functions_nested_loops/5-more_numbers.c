#include "main.h"

/**
 * more_numbers - prints 0 through 9, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar ('\n');
	}
}
