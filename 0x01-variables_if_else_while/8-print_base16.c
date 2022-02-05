#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar (x);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar (ch);
	}
		putchar ('\n');
	return (0);
}
