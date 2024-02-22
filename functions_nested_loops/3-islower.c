#include "main.h"

/**
 * _islower -  checks if character is lowercase or uppercase
 */

int _islower(int c)
{       
        char alph = c = '0';
        char lower;
        
        for (lower = 'a';  lower <= 'z'; lower++)
        {       
                if (alph == lower)
			_putchar('1');
		else
			_putchar('0');
	}

	return (0);
}

