#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#include "variadic_functions.h"
#include <stdio.h>

/**
 * chara - prints character
 * @c: pointer to character to be printed
 */

void chara(char c)
{
	printf("%c", c);
}

/**
 * integ - prints integers
 * @n: pointer to integer to be printed
 */

void integ(int n)
{
	printf("%d", n);
}

/**
 * dec - prints float
 * @n: pointer to float to be printed
 */

void dec(float n)
{
	printf("%f", n);
}

/**
 * str - prints string
 * @str: pointer to string to be printed
 */

void str(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

#endif /* DATA_TYPE_H */

