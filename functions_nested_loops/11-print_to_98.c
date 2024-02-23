#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from any number to 98
 * @n: variable for parameter
 * Return: exit point
 */

void print_to_98(int n)
{
	int num1 = 98;

	if (n < 98)
	{
		for (n = n; n < 98;  n++)
			printf("%d, ", n);
		printf("%d", num1);
		_putchar('\n');
	}

	else if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d", num1);
		_putchar('\n');
	} else
	{
		printf("%d", n);
		_putchar('\n');
	}
}

