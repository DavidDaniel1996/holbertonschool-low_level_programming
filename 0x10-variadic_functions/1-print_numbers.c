#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given
 * @separator: string to be printed between numbers
 * @n: amount of numbers to printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int count;
	int num;

	va_start(ptr, n);

	for (count = 0; count < n; count++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if (count != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
