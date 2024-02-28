#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer for parameter
 * Return: exit point
 */

int _strlen(char *s)
{
	char arr = {*s};
	int length = sizeof(arr) / sizeof(*arr[0]);
	return (length);
}

