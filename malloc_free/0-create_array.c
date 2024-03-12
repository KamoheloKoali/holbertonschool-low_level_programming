#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes them
 * @size: integer variable for parameter
 * @c: character variable for parameter
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

