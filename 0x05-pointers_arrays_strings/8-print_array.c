#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int l = 5;
	n = 0;

	while (a[l] != '\0')
	{
		l++;
	}

	while (n < l)
	{
		if (n == l - 1)
		{
			printf("%d", a[n]);
			n++;
		}
		else
		{
			printf("%d, ", a[n]);
			n++;
		}
	}
	printf("\n");
}		
