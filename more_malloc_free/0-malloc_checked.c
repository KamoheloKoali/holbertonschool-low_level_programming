#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: integer variable for parameter
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

