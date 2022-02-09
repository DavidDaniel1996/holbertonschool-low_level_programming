#include "main.h"

/**
 * print_sign - prints sign of value
 * @n: character
 *
 * Return: 1 if positive value, -1 if negative, 0 if neither
 */

int print_sign(int n)
{

	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}

	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
