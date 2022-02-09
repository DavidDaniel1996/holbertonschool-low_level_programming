#include "main.h"

int print_last_digit(int l)
{
	if (l > 0)
	{
		l = l % 10;
		return (l);
	}

	else if (l < 0)
	{
		l = (l * (-1)) % 10;
		return (l);
	}

	else
	{
		return (0);
	}
}
