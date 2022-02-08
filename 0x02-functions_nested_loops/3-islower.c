#include"main.h"

/**
* _islower - checks for lowercase letters
*
* Return - 1 is a failure, 0 is a sucess
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
