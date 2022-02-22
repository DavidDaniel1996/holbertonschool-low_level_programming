#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointer, points to first string we get substring from
 * @accept: pointer, points to second string we use to compare
 *
 * Return: return amount of times counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;
	int index;
	int n = 0;

	for (count = 0; s[count] != '\0' ; count++)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (s[count] == accept[index])
			{
				n = n + 1;
			}
		}
		if (s[count] == ',' || s[count] == ' ')
		{
			break;
		}
	}
	return (n);
}
