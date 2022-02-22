#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (count = 0; haystack[count] >= '\0'; count++)
	{
		if ((haystack + count) == needle)
		{
			break;
		}
	}
	return (needle);
}
