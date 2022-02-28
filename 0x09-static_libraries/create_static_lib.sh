#!/bin/bash

ar cr liball.a 0-isupper.o 0-memset.o 0-strcat.o 100-atoi.o
ar cr liball.a 1-isdigit.o 1-memcpy.o 1-strncat.o
ar cr liball.a 2-strchr.o 2-strlen.o 2-strncpy.o
ar cr liball.a 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o
ar cr liball.a 4-isalpha.o 4-strpbrk.o
ar cr liball.a 5-strstr.o 6-abs.o 9-strcpy.o _putchar.o
