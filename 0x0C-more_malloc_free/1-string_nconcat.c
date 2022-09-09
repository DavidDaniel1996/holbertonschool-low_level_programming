#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - pointer to allocated space, contains combo of two strings
 * @s1: pointer, points to string 1 in main function
 * @s2: pointer, points to string 2 in main function
 * @n: amount of bytes from string 2 to be combinedi
 *
 * Return: '\0' if ptr null, ptr otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, idx, count;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	if (n < strlen(s2))
		size2 = n;
	else
		size2 = strlen(s2);

	ptr = (char *)malloc((size1 + size2) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return ('\0');
	}

	for (count = 0; count <= size1; count++)
	{
		ptr[count] = s1[count];
		idx = count;
	}
	for (count = 0; count < size2; count++)
	{
		ptr[idx] = s2[count];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}
