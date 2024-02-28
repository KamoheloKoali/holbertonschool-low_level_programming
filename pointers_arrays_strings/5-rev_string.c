#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer for parameter
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');
}

