#include "main.h"

/**
 * print_diagonal - print a diagonal in the terminal
 * @n: variable for paremeter
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; n > 0; n--, j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}

