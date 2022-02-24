#include "main.h"

/**
 * prime - finds if a number is prime or not
 * @n: number given to test
 * @r: number used to test with modular devision
 *
 * Return: 0 if not prime, 1 if prime
 */

int prime(int n, int r)
{
	if ((n != r) && ((n % r == 0) || (n == 1)))
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	else if (r >= n)
	{
		return (1);
	}
	else
	{
		return (prime(n, r + 1));
	}
}

/**
 * is_prime_number - finds if a number is prime or not
 * @n: number given to test
 *
 * Return: value given by prime function
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

