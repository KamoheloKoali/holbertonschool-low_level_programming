#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable for parameter
 * Return: exit point
 */

int print_last_digit(int n)
{
	int last = n % 10;
	char lastchar = last + '0';

	if (n >= 10)
	{
		int last = n % 10;
		char lastchar = last + '0';

		_putchar(lastchar);
	} else if (n <= -10)
	{
		int last = -n % 10;
		char lastchar = last + '0';

		_putchar(lastchar);
	}
	return (0);
}

