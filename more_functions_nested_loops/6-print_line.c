#include "main.h"

/**
 * print_line - print line on terminal
 * @n: variable for parameter
 */

void print_line(int n)
{
	for (n = n; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}

