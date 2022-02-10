#include "main.h"

/**
* print_line - prints lines n amount of times
* @n: variable representing amount of times line is printed
*
* Return: Void
*/
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar ('\n');
}
