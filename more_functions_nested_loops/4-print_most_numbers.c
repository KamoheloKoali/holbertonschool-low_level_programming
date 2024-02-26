#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9, 2 and 4 excluded
 * @void: no parameter
 */

void print_most_numbers(void)
{
	int n;
	char cnum;

	for (n = 0; n <= 9; n++)
	{
		cnum = n + '0';
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(cnum);
	}
}

