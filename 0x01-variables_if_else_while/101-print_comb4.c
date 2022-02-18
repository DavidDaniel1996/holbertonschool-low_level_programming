#include <stdio.h>

/**
* main - prints possible three digit combinations
*
* Return: returns 0
*/

int main(void)
{
	int x, y, z;

	for (x = '0' ; x <= '7' ; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (!(x >= y || y >= z))
				{
					putchar (x);
					putchar (y);
					putchar (z);

					if (!(x == '7' && y == '8' && z == '9'))
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

