#include "main.h"

/**
 * root - finds the square root of a number
 * @n: number given to find the square of
 * @r: result of the square root of n
 *
 * Return: r if natural square root, -1 if not
 */

int root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r > n)
	{
		return (-1);
	}
	else
	{
		return (root(n, r + 1));
	}
}

/**
 * _sqrt_recursion - returns the value of the square root of n
 * @n: number being given to find square root of
 *
 * Return: returns value found in root function
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
