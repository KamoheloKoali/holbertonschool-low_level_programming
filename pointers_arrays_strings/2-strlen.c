#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer for parameter
 * Return: exit point
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

