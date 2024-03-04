#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to character
 * @b: character variable for parameter
 * @n: integer variable for parameter
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int length = 0, val = n;

	while (s[length] < n)
	{
		s[length] = b;
		length++;

	}
	return (s);
}

