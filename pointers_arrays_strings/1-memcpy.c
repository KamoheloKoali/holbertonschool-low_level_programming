#include "main.h"

/**
 * _memcpy - opies memory area
 * @dest: pointer to destination character
 * @src: pointer to source character
 * @n: integer variable for parameter
 * Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int length;

	for (length = 0; length < n; length++)
		dest[length] = src[length];
	return (dest);
}

