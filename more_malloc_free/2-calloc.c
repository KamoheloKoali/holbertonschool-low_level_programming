#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr[i]; i++)
		ptr[i] = 0;
}

