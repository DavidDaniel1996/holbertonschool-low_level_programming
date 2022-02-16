#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer, points to where string is being copied
 * @src: pointer, points to string
 *
 *Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	/*length--;*/

	for (count = 0; count < length && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';

	return (dest);
}
