#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: given number
 *
 * Return: value of factorial
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
