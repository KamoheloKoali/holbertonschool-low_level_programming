#include "main.h"

/**
 * print_rev - print a string backwards
 * @s: pointer fot parameter
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while(length--)
		_putchar(s[length]);
	_putchar('\n');
}

