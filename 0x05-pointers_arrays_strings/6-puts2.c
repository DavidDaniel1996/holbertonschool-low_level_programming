#include "main.h"

/**
 * puts2 - prints every other number in a string, starting with position 0
 * @str: pointer, points to value of variable in main function
 *
 * Return: Void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
