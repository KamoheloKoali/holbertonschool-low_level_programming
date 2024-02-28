#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

