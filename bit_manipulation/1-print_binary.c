#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert integer to binary
 * @n: number that's to be converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

