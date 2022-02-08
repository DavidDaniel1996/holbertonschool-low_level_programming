#include"main.h"

/**
 * _islower - checks for lowercase letters
 * @c: character
 *
 * Return: 1 is a failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
