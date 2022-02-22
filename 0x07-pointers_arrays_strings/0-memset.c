#include "main.h"

/**
 * *_memset - fills set amount of bytes in an array with a constant
 * @s: pointer, points to array
 * @b: variable representing the constant
 * @n: variable determining amount to be filled
 *
 * Return: returns value of pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
