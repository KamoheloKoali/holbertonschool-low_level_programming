#include "main.h"

/**
 * _islower -  checks if character is lowercase or uppercase
 */

int _islower(int c)
{       
        char alph = c + '0';
        char lower = 'a';
	char upper = 'A';
        
        for (lower = 'a';  lower <= 'z'; lower++)
        {       
                if (alph == lower)
		{
			_putchar('1');
			break;
		}
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (alph == upper)
		{
			_putchar('0');
			break;
		}
	}

	return (0);
}

