#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reveres array
 * @a: pointer, points to array
 * @n: amount of integers in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int store;
	int rev = n - 1;

	while (count < rev)
	{
		store = a[count];
		a[count] = a[rev];
		a[rev] = store;
		count++;
		rev--;
	}
}
