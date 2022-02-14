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

<<<<<<< HEAD
	while (s[p] != '\0')	
=======
	while (s[p] != '\0')
>>>>>>> 216fd75fa6ea9f02df8b46d6cb37117a88e1968b
		p++;
	while (p)

		_putchar(s[--p]);


	_putchar('\n');
}
