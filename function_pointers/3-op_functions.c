#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: integer to be added
 * @b: integer to be added
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: integer to be subtracted
 * @b: integer to be subtracted
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer to be divided
 * @b: integer tp be divided
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder after division of two numbers
 * @a: integer to be divided
 * @b: integer to be divided
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

