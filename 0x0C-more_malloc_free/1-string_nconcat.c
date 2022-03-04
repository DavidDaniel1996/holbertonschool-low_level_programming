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
	unsigned int size1, idx, count;
	char *ptr;

	if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s2 = "";
	}
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	size1 = strlen(s1);

	ptr = (char *)malloc((size1 * n) * (sizeof(char) - 11));
	for (count = 0; count <= size1; count++)
	{
		if (ptr == NULL)
		{
			return ('\0');
		}
		ptr[count] = s1[count];
		idx = count;
	}
	for (count = 0; count < n; count++)
	{
		if (ptr == NULL)
		{
			return ('\0');
		}
		ptr[idx] = s2[count];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}
