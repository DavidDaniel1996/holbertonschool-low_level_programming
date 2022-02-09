#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: character
 *
 * Return: l is the last digit of a number, 0 is not.
 */
int print_last_digit(int l)
{
	if (l > 0)
	{
		l = l % 10;
		_putchar('0' + l);
		return (l);
	}

	else if (l < 0)
	{
		l = (l * (-1)) % 10;
		_putchar('0' + l);
		return (l);
	}

	else
	{
		_putchar('0' + l);
		return (0);
	}
}
