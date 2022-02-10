#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the sequence of number for varaible n to 98
 * @n: character representing value
 *
 * Return: void
 */
void print_to_98(int n)
{

	if (n >= 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
