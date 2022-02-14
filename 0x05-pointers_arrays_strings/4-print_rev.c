#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer, points to string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		idx++;
	}

	while (s[idx] >= 0)
	{
		_putchar(s[idx--]);
	}
	_putchar('\n');
}
