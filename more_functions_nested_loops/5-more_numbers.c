#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * @void: no parameters
 */

void more_numbers(void)
{
	int n, n1, num, num2;

	for (n = 0; n < 10; n++)
	{
		for (n1 = 0; n1 < 15; n1++)
		{
			if (n1 < 10)
				_putchar(n1 + '0');
			else
			{
				for (num = 0; num < 2; num++)
				{
					if (num == 0)
						num2 = n / 10;
					else
						num2 = n % 10;
					_putchar(num2 + '0');
				}
			}
		}
		_putchar('\n');
	}
}

