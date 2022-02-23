#include "main.h"

/**
 * _strlen_recursion - counts string length using recursion
 * @s: pointer, points to string
 *
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (n + _strlen_recursion(s + 1));
	}
}
