#include "main.h"

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	/*length--;*/

	for (count = 0; count < length && src[count] != '\0'; count++)
	{
		dest[length] = src[count];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
