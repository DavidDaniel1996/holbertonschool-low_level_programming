#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int count;
	int index;

	for (count = 0; haystack[count] != '\0' ; count++)
	{
		for (index = 0; needle[index] != '\0'; index++)
		{
			if (haystack[count] == needle[index])
			{
				for (index = index; haystack[index + count] == needle[index]; index++)
				{
					;
				}
				return (haystack + ((count + index) + 2));
			}
			/*else 
			{
				break;
			}
	*/	}
		/*if (s[count] == accept[index])
		{
			break;
		}*/
	}
	return ('\0');
}
