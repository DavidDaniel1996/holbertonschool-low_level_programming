#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer, points to string
 *
 * Return: Void
 */

void print_rev(char *s)
{

	
	while (*s != '\0')
	{
		s++;
	}

	while (*s >= 0)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
