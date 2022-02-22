#include "main.h"

char *_strchr(char *s, char c)
{
	unsigned char count;

	for (count = 'a' ; s[count] <= c ;  count ++)
	{
		;
	}
	*s = s[count};
	return(s);
}
