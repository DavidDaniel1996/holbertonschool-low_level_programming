#include "main.h"

/**
 * _isdigit - checks for single digit numbers
 * @c: variable representing character
 *
 * Return: 1 if single digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
