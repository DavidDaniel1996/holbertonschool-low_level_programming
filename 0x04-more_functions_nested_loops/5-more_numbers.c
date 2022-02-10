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

		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		_putchar ('\n');
	}
}
