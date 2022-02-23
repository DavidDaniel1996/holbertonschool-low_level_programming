#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int count;
	int index;

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
	return (0);
}
