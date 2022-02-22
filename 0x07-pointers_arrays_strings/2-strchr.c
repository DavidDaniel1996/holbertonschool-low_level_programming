#include "main.h"

/**
 * *_strchr - locates a character in string, and prints string from position
 * @s: pointer, points to array
 * @c: letter being located
 *
 * Return: Return string value, and return null byte
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0 ; s[count] != '\0' ; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return ('\0');
}
