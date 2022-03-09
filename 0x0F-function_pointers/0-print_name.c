#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints name
* @name: name to be printed
* @f: pointer, points to function that prints name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f ==  NULL || name == NULL)
	{
		return;
	}
	f(name);
}
