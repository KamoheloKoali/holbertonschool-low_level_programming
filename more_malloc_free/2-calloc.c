#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}

