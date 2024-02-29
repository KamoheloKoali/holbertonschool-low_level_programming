#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer one of the parameter
 * @src: pointer two of the parameter
 * @n variable for parameter
 * Return: exit point
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, length1 = 0;

	if (n > 0)
	{
		while (src[length1])
		{
			for (length = 0; length <= n; length++)
				dest[length] = src[length1];
			length1++;
		}
	}
	return (dest);
}

