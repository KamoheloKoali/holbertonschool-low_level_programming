#include "main.h"

/**
 * print_array - print an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void print_array(int *a, int n)
{
	int length = 0;

	while (*a[length])
	{
		if (length == n)
			return;
		_putchar(*a[length]);
		length++;
	}
}

