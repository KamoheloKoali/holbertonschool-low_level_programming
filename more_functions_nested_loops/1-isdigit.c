#include "main.h"

/**
 * _isdigit - checks if input is digit or not
 * @c: variable for parameter
 * Return: exit point
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

