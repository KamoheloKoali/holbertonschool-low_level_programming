#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert integer to binary
 * @n: number that's to be converted to binary
 */

void print_binary(unsigned long int n)
{
	while (n)
	{
		putchar(n & 1 ? '1' : '0');
		n >>= 1;
	}
}

