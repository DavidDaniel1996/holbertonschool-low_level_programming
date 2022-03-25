#include "main.h"

/**
 * get_bit - gets the value of a bit at given index
 * @n: number
 * @index: position of bit
 *
 * Return: -1 if error, value otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	value = (((n >> index) & 1));

	return (value);
}
