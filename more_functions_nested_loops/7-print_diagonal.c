#include "main.h"

/**
 * print_diagonal - print a diagonal in the terminal
 * @n: variable for paremeter
 */

void print_diagonal(int n)
{
	int num;
	int num1;
	int num2 = n-1;

	for (num = n; n > 0; num--)
	{
		if (num < n)
		{
			for (num1 = 0; num1 < num2; num1++)
			{
				_putchar(' ');
				_putchar('\\');
			}
		} else if (num == n)
		{
			_putchar('\\');
			_putchar('\n');
		} else
			_putchar('\n');
	}
	_putchar('\n');
}

