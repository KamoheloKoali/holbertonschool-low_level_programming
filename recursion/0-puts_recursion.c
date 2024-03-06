#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to character
 */

void _puts_recursion(char *s)
{
	int length = 0;

	if (*s)
		return;
	_putchar(s[length]);
	length++;
	_puts_recursion(s);
}

