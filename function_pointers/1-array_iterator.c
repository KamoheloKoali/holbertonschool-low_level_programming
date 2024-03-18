#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function as a parameter
 * @array: array to be iterated on
 * @size: size of array
 * @action: function that will be used in each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}

