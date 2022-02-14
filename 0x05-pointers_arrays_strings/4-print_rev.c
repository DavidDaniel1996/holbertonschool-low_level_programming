#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer, points to string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')	
		p++;
	while (p)

		_putchar(s[--p]);


	_putchar('\n');
}                                               
