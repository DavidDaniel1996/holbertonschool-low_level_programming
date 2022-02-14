#include "main.h"

/**
 * _strlen - counts the amount of characters in a string
 * @s: pointer, points to the value of a variable
 *
 * Return: returns the amount of characters in string
 */

int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;
	}

	return (charCount);
}
