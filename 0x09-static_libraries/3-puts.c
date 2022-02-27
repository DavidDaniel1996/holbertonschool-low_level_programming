#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer, points to string
 *
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
