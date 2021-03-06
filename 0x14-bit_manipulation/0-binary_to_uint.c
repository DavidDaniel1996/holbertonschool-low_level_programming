#include "main.h"

/**
 * binary_to_uint - turns a string of binary characters into an unsigned int
 * @b: pointer to string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, idx = 0, weight = 1;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	while (idx < strlen(b))
	{
		idx++;
	}

	idx = idx - 1;

	while (idx > 0)
	{
		if (b[idx] != '0' && b[idx] != '1')
		{
			return (0);
		}
		value = value + ((b[idx] - '0') * weight);
		weight = weight * 2;
		idx--;
	}

	if (b[idx] != '0' && b[idx] != '1')
	{
		return (0);
	}
	else
	{
		value = value + ((b[idx] - '0') * weight);
		return (value);
	}
}
