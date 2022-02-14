#include "main.h"

/**
 * swap_int - swaps value of two variables
 * @a: pointer, points to address of first variable
 * @b: pointer, points to address of second variable
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
