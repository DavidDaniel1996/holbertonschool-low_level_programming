#include "main.h"

/**
 * _strpbrk - searches for matching letter in two strings
 * @s: pointer, points to first string we get substring from
 * @accept: pointer, points to second string we use to compare
 *
 * Return: returns first string from matching letter onward
 */

char *_strpbrk(char *s, char *accept)
{
	int count;
	int index;

	for (count = 0; s[count] != '\0' ; count++)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (s[count] == accept[index])
			{
				return (s + count);
			}
		}
		if (s[count] == accept[index])
		{
			break;
		}
	}
	return ('\0');
}

