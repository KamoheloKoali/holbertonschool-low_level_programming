#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: variable for parameter 1
 * @y: variable for parameter 2
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

