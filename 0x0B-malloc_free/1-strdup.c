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

char *_strdup(char *str)
{
	int size;
	int count;
	char *ptr;

	if (str == NULL)
	{
		return ('\0');
	}

	size = strlen(str);
	ptr = (char *)malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		if (ptr == NULL)
		{
			return ('\0');
		}
		ptr[count] = str[count];
	}
	return (ptr);
}
