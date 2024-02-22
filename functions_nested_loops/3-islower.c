#include "main.h"

/**
 * _islower -  checks if character is lowercase or uppercase
 * @c - variable for paremeter
 * Return: exit point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

