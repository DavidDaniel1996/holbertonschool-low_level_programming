#include "main.h"

/**
 * print_binary - function that prints number in binary
 * @n: number given to convert
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar ((n & 1) + '0');
}
