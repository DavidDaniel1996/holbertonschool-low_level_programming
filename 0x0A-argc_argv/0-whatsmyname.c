#include <stdio.h>
#include "main.h"

/**
 * main - prints name of executable file
 * @argc: size of argv array, number of command line arguments
 * @argv: array containing command line of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	return (0);
}
