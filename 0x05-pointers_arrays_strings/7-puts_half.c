#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: pointer, points to the string in main function
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int total = 0;
	int count = 0;

	while (str[total] != '\0')
	{
		total++;
	}

	if (total % 2 != 0)
	{
		while (str[count] != '\0')
		{
			if (count <= total / 2)
			{
				count++;
			}
			else
			{
				_putchar(str[count]);
				count++;
			}
		}
		_putchar('\n');
	}
	else
	{
		while (str[count] != '\0')
		{
			if (count <= (total - 1) / 2)
			{
				count++;
			}
			else
			{
				_putchar(str[count]);
				count++;
			}
		}
		_putchar ('\n');
	}
}
