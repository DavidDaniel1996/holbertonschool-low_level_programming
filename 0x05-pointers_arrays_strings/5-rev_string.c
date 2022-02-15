#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char store;

	while (s[count] != '\0')
	{
		count++;
	}
	while (rev < count)
	{
		store = s[rev];
		s[rev] = s[count];
		s[count] = store;
	}
}
