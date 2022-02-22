#include "main.h"

/**
 * *_memcpy - copies n amount of src to dest string
 * @dest: pointer, points to string being modified
 * @src: pointer, points to string being copied
 * @n: determines amount of src string being copied
 *
 * Return: returns value of dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; count < n ; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
