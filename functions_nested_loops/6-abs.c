#include "main.h"

/**
 * _abs(int) - tests whether a number is absolute or not
 * @int: data type for parameter
 * Return: exit point
 */

int _abs(int n)
{
	int num = n * (-1);

	if (n > 0)
		_putchar(n);
	else if (n < 0)
		_putchar(num);
	else if (n == 0)
		_putchar(0);
	return (1);
}

