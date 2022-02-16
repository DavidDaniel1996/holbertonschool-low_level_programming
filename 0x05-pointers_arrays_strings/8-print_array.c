#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all values in an array
 * @a: pointer, points to the array
 * @n: represents the length of the array
 *
 */

void print_array(int *a, int n)
{
	int l = 0;

	while (l < n)
	{
		if (l == n - 1)
		{
			printf("%d", a[l]);
			l++;
		}
		else
		{
			printf("%d, ", a[l]);
			l++;
		}
	}
	printf("\n");
}
