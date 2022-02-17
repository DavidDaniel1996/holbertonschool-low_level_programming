#include "main.h"

int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2)
	{
		return (-15);
	}
	if (*s1 > *s2)
	{
		return (15);
	}
	else 
	{
		return (0);
	}
}
