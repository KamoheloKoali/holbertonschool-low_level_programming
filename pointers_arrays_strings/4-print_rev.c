#include "main.h"

/**
 * print_rev - print a string backwards
 * @s: pointer fot parameter
 */

void print_rev(char *s)
{
	int length = -2;
	char letter;

	while (s[length])
	{
		letter = s[length];
		_putchar(letter);
		length--;
	}
}

