#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: size of argv array
 * @argv: array containing command line of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc;  count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
