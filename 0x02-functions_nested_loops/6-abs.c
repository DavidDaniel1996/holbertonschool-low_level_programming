#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @a: character
 *
 * Return: 'a' for absolute value, 0 when value is 0.
 */

int _abs(int a)
{
	if (a > 0)
	{
		a = a * (1);
		return (a);
	}

	else if (a < 0)
	{
		a = a * (-1);
		return (a);
	}

	else
	{
		return (0);
	}
}
