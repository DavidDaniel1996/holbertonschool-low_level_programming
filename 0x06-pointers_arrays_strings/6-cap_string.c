#include "main.h"

/**
* cap_string - capitalizes first letter of every word in a string
* @a: pointer, points to array in main function
*
* Return: value of array modified
*/

char *cap_string(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
		{
			if ((a[c - 1] >= 0 && a[c - 1] <= 47) || (a[c - 1] >= 58 && a[c - 1] <= 63))
			{
				a[c] = a[c] - 32;
			}
		}
	}
	return (a);
}
