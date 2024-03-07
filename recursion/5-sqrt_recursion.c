#include "main.h"

/**
 * sqrt_odd - function to check for odd
 * @check: number to check for odd number
 * @n: argument to use for check
 * Return: sqrt_odd
 */

int sqrt_odd(int check, int n)
{
	if (n < 0)
		return (-1);
	else if (check == n * n)
		return (n);
	return (sqrt_odd(check, n - 2));
}

/**
 * _sqrt_recursion - returns a natural square root of a number
 * @n: variable for the parameter
 * Return: integer
 */

int _sqrt_recursion(int n)
{
        int sqrt;

        if (n < 0)
                return (-1);

        else if (n <= 1)
                return (n);

        if (n % 2 == 0)
        {
                sqrt = _sqrt_recursion(n / 2);

                if (n / sqrt == sqrt)
                        return (sqrt);
                else if (sqrt > 1)
                        return (sqrt * 2);
                return (-1);
        }
        return (sqrt_odd(n, n - 2));
}

