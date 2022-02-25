#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds all integers
 * @argc: size of argv array
 * @argv: unused, array containing command lines
 *
 * Return: 0 if sucessful, 1 if Error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += (atoi(argv[count]));
				if (count == argc - 1)
				{
					printf("%d\n", sum);
					break;
				}
			}
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
