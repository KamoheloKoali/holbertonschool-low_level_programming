#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer for parameter
 * @n: variable for parameter
 */

void reverse_array(int *a, int n)
{
	int length = 0, length1, length2, actlength = n - 1, firstel = a[length];
	int arr[];

	for (length1 = 0, length2 = 0; length1 < n; length1++, length2++)
		arr[length1] = a[length2];

	if (n > 0)
	{
		while (length < n)
		{
			a[length] = arr[actlength];
			actlength--;
			length++;
		}
	}
}

