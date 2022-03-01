#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array - creates an array dynamically sized
* @size: represents the size of the array
* @c: represents the value(s) stored in the array
*
* Return: NULL if size is 0; pointer to array otherwise
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(c));

	unsigned int count;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			ptr[count] = c;
		}
		return (ptr);
	}
}
