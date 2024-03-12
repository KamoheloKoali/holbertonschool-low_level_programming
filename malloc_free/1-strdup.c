#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates memory to a copy of a string
 * @str: pointer to character
 * Return: character
 */

char *_strdup(char *str)
{
	char *s;
	int i, length;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] > '\0'; length++)
		length++;
	s = malloc(sizeof(char) * length);
	for (i = 0; i < length - 1; i++)
		s[i] = str[i];
	return (s);
}

