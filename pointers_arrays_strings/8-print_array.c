#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void print_array(int *a, int n)
{
	int length = 0;

	while (a[length])
	{
		if (length == n)
			return;
		else if (length < (n - 1))
		{
			printf("%d, ", a[length]);
			length++;
		}else if (length < n)
		{
			printf("%d\n", a[length]);
			length++;
		}
	}
}

