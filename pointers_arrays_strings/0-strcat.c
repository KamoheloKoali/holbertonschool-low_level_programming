#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: pointer for parameter
 * @src: pointer for parameter
 * Return: exit point
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int length1 = 0;

	while (dest[length])
		length++;
	while (src[length1])
	{
		length++;
		dest[length] = src[length1];
		length1++;
	}
	length++;
	length1++;
	dest[length] = src[length1];
	return (dest);
}

