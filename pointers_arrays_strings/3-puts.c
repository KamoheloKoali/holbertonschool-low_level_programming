#include "main.h"

/**
 * _puts - prints a string to the screen
 * @str: pointer for parameter
 */

void _puts(char *str)
{
	int length = 0;
	char letter;

	while (str[length])
	{
		letter = str[length];
		_putchar(letter);
		length++;
	}
	_putchar('\n');
}

