#include <stdlib.h>
#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: first element
 * @max: last element
 * Return: integer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);

}

