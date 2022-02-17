#include "main.h"

/**
* _strncat - appends one string to the end of another, using n amount of bytes
* @dest: string being modified
* @src: string being appended to modified string
* @n: number of bytes
*
* Return: modified string
*/

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int count = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	/*length--;*/

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[length + count] = src[count];
	}
	dest[length + count] = '\0';

	return (dest);
}

