#include "main.h"

/**
 * puts2 - print every other character of a string 
 * @str: pointer for parameter
 */

void puts2(char *str)
{
	int length = 0;
	int length1 = length + 1;

	while (str[length])
	{
		if (length > 0)
			_putchar([length1]);
		else
			_putchar(str[length]);

	}
	_putchar('\n');
}

