#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable for parameter
 * Return: exit point
 */

int print_last_digit(int n)
{
	int last = n % 10;
	if (n < 0)
	{
		last = last * -1;
		return (last);
	}
	_putchar(last + '0');
	return (last);
}

