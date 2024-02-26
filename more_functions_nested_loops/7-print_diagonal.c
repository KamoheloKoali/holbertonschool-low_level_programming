#include "main.h"

/**
 * print_diagonal - print a diagonal in the terminal
 * @n: variable for paremeter
 */

void print_diagonal(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

