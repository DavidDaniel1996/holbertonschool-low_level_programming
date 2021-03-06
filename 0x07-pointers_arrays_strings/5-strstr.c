#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 *
 * Return: returns value starting from substring
 */

char *_strstr(char *haystack, char *needle)
{
	int count;
	int index;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (count = 0; haystack[count] != '\0' ; count++)
	{
		index = 0;
		if (haystack[count] == needle[index])
		{
			while ((needle[index] == haystack[count + index]) && needle[index] != '\0')
			{
				index++;
			}

			if (needle[index] == '\0')
			{
				return (haystack + count);
			}
		}
		else if (haystack[count] == '\0')
		{
			return ('\0');
		}
	}

	if (haystack[count] == '\0')
	{
		return ("nil");
	}
	else
	{
		return (0);
	}
}
