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
	} else if ((length % 2) == 0)
		_putchar('\n');
	while (str[length1])
	{
		if ((length % 2) == 0)
		{
			_putchar(str[length1]);
			length1++;
		} else if ((length % 2) > 0)
		{
			length1++;
			_putchar(str[length1]);
		}
	}
}

