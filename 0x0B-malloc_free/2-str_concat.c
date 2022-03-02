#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns pointer to allocated space, contains duplicate of string
* @str: pointer, points to string in main function
*
* Return: '\0' if str and ptr null, ptr otherwise
*/

char *str_concat(char *s1, char *s2)
{
	int fullSize, size1, size2;
	int count, idx;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}

	size1 = (strlen(s1) + 1);
	size2 = strlen(s2);
	fullSize = size1 + size2;

	ptr = (char *)malloc((fullSize * sizeof(char)) + 1);

	for (count = 0; count < size1; count++)
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
