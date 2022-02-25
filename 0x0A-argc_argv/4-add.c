#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds all integers
 * @argc: size of argv array
 * @argv: unused, array containing command lines
 *
 * Return: 0 if sucessful, 1 if Error
 */

int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	unsigned int idx;
	int count;
	char *store;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			store = argv[count];
			for (idx = 0; idx < strlen(store); idx++)
			{
				if (store[idx] < 48 || store[idx] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += (atoi(argv[count]));
			if (count == argc - 1)
			{
				printf("%d\n", sum);
				break;
			}
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
