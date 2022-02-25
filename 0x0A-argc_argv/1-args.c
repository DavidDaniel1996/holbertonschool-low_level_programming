#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: size of argv array
 * @argv: array containing command line of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		for (count = 1; argv[count] < argv[argc]; count++)
		{
			;
		}
		printf("%d\n", (argc - 1));
	}
	else
	{
		count = 0;
		printf("%d\n", (argc - 1));
	}
	return (0);
}
