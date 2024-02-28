#include "main.h"

/**
 * puts_half - prints half astring
 * @str: pointer for parameter
 */

void puts_half(char *str)
{
	int length = 0;
	int length1;

	while (str[length])
		length++;
	if (length > 0)
	{
		length1 = length / 2;
		length = 0;
	}
	while (str[length1])
	{
		_putchar(str[length1]);
		length1++;
	}
	_putchar('\n');
}

