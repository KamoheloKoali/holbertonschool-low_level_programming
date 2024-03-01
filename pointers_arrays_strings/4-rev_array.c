#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void reverse_array(int *a, int n)
{
	int length = 1, actlength = n - 2, lastel = a[n-1];

	if (n > 0)
	{
		a[lastel] = a[0];
		a[length] = lastel;
		while (length < n)
		{
			a[length] = a[actlength];
			actlength--;
			length++;
		}
}

