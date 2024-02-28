#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: pointer 1 for paremeter 1
 * @src: pointer 2 for paremeter 2
 * Return: exit point
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length])
	{
		dest = src;
		length++;
	}
	return (dest);
}

