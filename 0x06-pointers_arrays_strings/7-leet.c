#include "main.h"

/**
* *leet - encodes string into 1337
* @a: pointer, points to string
*
* Return: returns modified string
*/

char *leet(char *a)
{
	int count;
	int index;
	int num[] = {4, 3, 0, 7, 1};
	char code[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};

	for (count = 0; a[count] != '\0'; count++)
	{
		index = 0;

		while (a[count] != code[index] && index < 10)
		{
			index++;
		}
		if (a[count] == code[index])
		{
			index = index / 2;
			a[count] = (num[index] + '0');
		}
	}
	return (a);
}
