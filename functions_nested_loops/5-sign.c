#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: variable for parameter
 * Return: exit point
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}

