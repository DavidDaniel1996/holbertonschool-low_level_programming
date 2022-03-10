#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings given as arguments
 * @separator: string printed between argument strings
 * @n: number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *string;
	unsigned int count;

	va_start(ptr, n);

	for (count = 0; count < n; count++)
	{
		string = va_arg(ptr, char*);
		printf(string == NULL ? "(nil)" : "%s", string);

		if (count != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
