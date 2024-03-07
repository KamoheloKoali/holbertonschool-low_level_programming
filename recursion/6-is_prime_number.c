#include "main.h"

/**
 * prime_number - help function for is_prime_number
 * @n: Original number to be tested
 * @i: Original number to test with
 *
 * Return: 1 if a prime else 0
 */

int prime_number(int n, int i)
{
if (i == 1)
return (1);
else if (n % i == 0)
return (0);
else if (n % i != 0)
return (prime_number(n, i - 1));
return (0);
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: variable for parameter
 * Return: integer
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, n - 1));
}

