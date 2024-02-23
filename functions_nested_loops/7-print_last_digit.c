#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable for parameter
 * Return: exit point
 */

int print_last_digit(int n)
{
	int last;
	char lastchar;

	if (n >= 10)
	{
		last = n % 10;
		lastchar = last + '0';

		_putchar(lastchar);
	} else if (n <= -10)
	{
		last = -n % 10;
		lastchar = last + '0';

		_putchar(lastchar);
	}
	return (0);
}

