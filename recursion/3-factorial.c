#include "main.h"

/**
 * factorial - returns a factorial of any number
 * @n: variable for parameter
 * Return: integer
 */


int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

