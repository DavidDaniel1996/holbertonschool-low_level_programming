#include <stdio.h>

int main(void)
{
	int x, y;

	for (x = '0' ; x <= '8' ; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (!(x == y))
			{
				if (!(x == '0' && y == '0'))
				{
					putchar (x);
					putchar (y);

					if (!(x == '8' && y == '9'))
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
