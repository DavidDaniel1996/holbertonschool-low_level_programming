#include "main.h"

void rev_string(char *s)
{
	int charCount = 0;
	/*int revCount = 0;*/
	char temp[1000];

	while (s[charCount] != '\0')
	{
		charCount++;
	}
	while (s[charCount])
	{
		temp[1000] = s[charCount];
		charCount--;
		
		/*if (temp[revCount] != '\0')
		{
			revCount++;
		}*/
	}

	*s = temp[1000];
}	
