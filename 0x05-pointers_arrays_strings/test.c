#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char temp[1000];

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		temp[rev] = s[count];
		count--;
		rev++;
		printf("%d ", s[count]);
		printf("%c ", temp[rev]);
		printf("%d ", rev);
	}
	while (temp[count] != '\0')
	{
		printf("temp: %d\n", temp[count]);
		count++;
	}
	
	temp[rev] = '\0';

	while (temp[count] != '\0')
	{
		s[count] = temp[count];
		count++;
	}
}
