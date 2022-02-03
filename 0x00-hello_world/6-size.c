#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int n;
	long long int l;
	float f;

	printf("Size of a char: %zu.\n", sizeof (char));
	printf("Size of an int: %zu.\n", sizeof (int));
	printf("Size of a long int: %zu.\n", sizeof (long int));
	printf("Size of a long long int: %zu.\n", sizeof (long long int));
	printf("Size of a float: %zu.\n", sizeof (float));

	return (0);
}
