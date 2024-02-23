#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c: variable for parameter
 * Return: exit point
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

