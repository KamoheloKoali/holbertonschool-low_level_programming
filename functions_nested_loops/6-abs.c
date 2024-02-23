#include "main.h"

/**
 * _abs - tests whether a number is absolute or not
 * @n: variable for parameter
 * Return: exit point
 */

int _abs(int n)
{
	int num = -n;

	if (n > 0)
		return (n);
	else if (n < 0)
		return (num);
	return (0);
}

