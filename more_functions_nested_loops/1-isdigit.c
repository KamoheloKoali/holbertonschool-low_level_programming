#include "main.h"

/**
 * _isdigit - checks if input is digit or not
 * @c: variable for parameter
 * Return: exit point
 */

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	      return (0);
	else if (c > 31)
		return (2);
	return (1);
}

