#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * @void: no parameters
 */

void more_numbers(void)
{
	int n;
	int n1;
	char cnum;

	for (n = 0; n <= 10; n++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			cnum = n1 + '0';
			_putchar(cnum);
		}
		_putchar('\n');
	}
}

