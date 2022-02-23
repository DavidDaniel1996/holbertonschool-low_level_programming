#include "main.h"

/**
 * _pow_recursion - returns power of given number
 * @x: base number being multiplied
 * @y: amount of times base number is multiplied
 *
 * Return: returns value of power result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
