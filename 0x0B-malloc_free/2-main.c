#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat(NULL, "Hello");
	printf("%s\n", s);
    s = str_concat("Hello", NULL);
	printf("%s\n", s);
    s = str_concat(NULL, NULL);
	printf("%s\n", s);

    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    /*printf("%s\n", s);*/
    free(s);
    return (0);
}
