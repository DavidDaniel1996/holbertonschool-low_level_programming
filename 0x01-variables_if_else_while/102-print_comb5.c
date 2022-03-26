#include <stdio.h>

/**
 * main - prints possible two digit combinations
 *
 * Return: returns 0
 */

int main(void)
{
	int a, b, x, y;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (x = 0; x <= 9; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					while (y <= b)
					{
						y++;
					}
					putchar(x + '0');
					putchar(y + '0');
					if (!((a == 9 && b == 8) && (x == 9 && y == 9)))
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
