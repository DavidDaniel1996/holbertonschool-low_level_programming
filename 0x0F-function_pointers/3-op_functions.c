#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - moduly divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of modular division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}

	return (a % b);
}
