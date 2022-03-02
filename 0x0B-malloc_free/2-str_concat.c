#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - pointer to allocated space, contains combo of two strings
 * @s1: pointer, points to string 1 in main function
 * @s2: pointer, points to string 2 in main function
 *
 * Return: '\0' if ptr null, ptr otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int fullSize, size1, size2, idx, count;
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
	printf("1");
	size1 = strlen(s1);
	size2 = strlen(s2);
	fullSize = size1 + size2;
	ptr = (char *)malloc(fullSize * (sizeof(char) + 1));
	for (count = 0; count <= size1; count++)
	{
		if (ptr == NULL)
		{
			return ('\0');
		}
		ptr[count] = s1[count];
		idx = count;
	}
	for (count = 0; count < size2; count++)
	{
		if (ptr == NULL)
		{
			return ('\0');
		}
		ptr[idx] = s2[count];
		idx++;
	}
	return (ptr);
}
