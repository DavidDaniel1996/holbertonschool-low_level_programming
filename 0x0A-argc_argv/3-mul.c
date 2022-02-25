#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: size of argv array
 * @argv: unused, array containing command lines
 *
 * Return: 0 if sucessful, 1 if Error
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int mult;

	if (argc > 1)
	{
		mult = argc * (argc - 1);
		printf("%d\n", mult);
	}
	else if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
