#include "main.h"

/**
 * print_square - print square
 * @size: variable of paremeter
 */

void print_square(int size)
{
	int num = size;
	int num1;

	if (size > 0)
	{
		for (num; num >= 1; num--)
		{
			for (num1 = 0; num1 < size; num1++)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}

