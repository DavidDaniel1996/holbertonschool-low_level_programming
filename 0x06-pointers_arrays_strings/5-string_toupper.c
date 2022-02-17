#include "main.h"

/**
* string_toupper - changes lowercase letters in a string to uppercase
* @a: pointer, points to array
*
* Return: returns array
*/

char *string_toupper(char *a)
{
	int count;

	for (count = 0; a[count] != '\0'; count++)
	{
		if (a[count] >= 'a' && a[count] <= 'z')
		{
			a[count] = a[count] - 32;
		}
	}
	return (a);
}
