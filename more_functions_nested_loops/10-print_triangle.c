#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: variable for parameter
 */

void print_triangle(int size)
{
	int num, margin, num1, to_print;

	if (size <= 0)
		_putchar('\n');
	else
	{
		num1 = size - 1;
		for (num = 0; num < size; num++)
		{
			margin = 0;
			while (margin < (num1 - num))
			{
				_putchar(' ');
				margin++;
			}
			to_print = size - margin;
			while (to_print > 0)
			{
				_putchar('#');
				to_print--;
			}
			_putchar('\n');
		}
	}
}

