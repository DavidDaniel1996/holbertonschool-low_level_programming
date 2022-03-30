#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: pointer
 * @size: variable
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int idx;
	int store1 = 0, store2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		store1 += a[idx];
		a = a + size;
	}
	printf("%d, ", store1);

	a = a - size;

	for (idx = 0; idx < size; idx++)
	{
		store2 += a[idx];
		a = a - size;
	}
	printf("%d\n", store2);
}
