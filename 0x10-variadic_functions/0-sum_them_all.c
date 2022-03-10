#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to add numbers
 * @n: amount of numbers to be added from all the arguments given
 *
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int count;
	int sum = 0;

	va_start(ptr, n);

	for (count = 0; count < n; count++)
	{
		sum = sum + va_arg(ptr, int);
	}

	va_end(ptr);
	return (sum);
}
