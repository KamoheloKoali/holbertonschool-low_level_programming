#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void reverse_array(int *a, int n)
{
	int length = 0, actlength = n - 1;

	while (length < n)
	{
		a[length] = a[actlength];
		_putchar('w');
		actlength--;
		length++;
	}
}

