#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable for parameter
 * Return: exit point
 */

int print_last_digit(int n)
{
	int last;
	if (n >= 10)
	{
		last = n % 10;
		return (last);
	} else if (n <= -10)
	{
		last = -n % 10;
		return (last);
	}
	return (0);
}

