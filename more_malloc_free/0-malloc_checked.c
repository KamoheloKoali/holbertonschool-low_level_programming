#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: integer variable for parameter
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(sizeof unsigned int);

	if (ptr == NULL)
		exit(98);
}

