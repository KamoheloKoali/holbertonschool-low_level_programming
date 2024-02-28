#include "main.h"

/**
 * puts2 - print every other character of a string 
 * @str: pointer for parameter
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length])
	{
		if (length > 0)
		{
			if (length == 1)
			{
				int length1 = (length - 1) + 2;
				_putchar(str[length1]);
			} else
			{
				length += 2;
				_putchar(str[length]);
			}
		}
		else
		{
			_putchar(str[length]);
			length++;
		}

	}
	_putchar('\n');
}

