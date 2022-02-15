#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: pointer, points to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char store;

	while (s[count] != '\0')
	{
		count++;
	}

	count--;

	while (rev < count)
	{
		store = s[rev];
		s[rev] = s[count];
		s[count] = store;
		count--;
		rev++;
	}
}
