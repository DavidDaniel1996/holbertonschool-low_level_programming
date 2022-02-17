#include "main.h"

/**
* _strncpy - copies n amount of bytes in second string to first string
* @dest: string being modified
* @src: string being added to modified string
* @n: amount of bytes to be printed
*
* Return: modified string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
