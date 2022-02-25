#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: size of argv array
 * @argv: array containing command line of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argv[count] < argv[argc])
	{
		printf("%d\n", (argc - 1));
	}
	else
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
