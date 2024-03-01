#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void reverse_array(int *a, int n)
{
	int length = 0, actlength = n - 1, firstel = a[length];

	if (n > 0)
	{
		while (length < (n - 1))
		{
			a[length] = a[actlength];
			if (firstel == a[actlength])
				a[actlength] = firstel;
			actlength--;
			length++;
		}
	}
}

