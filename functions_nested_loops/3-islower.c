#include "main.h"

/**
 * _islower -  checks if character is lowercase or uppercase
 */

int _islower(int c)
{
        char lower;
        char upper;

        for (lower = 97;  lower <= 122; lower++)
        {
                if (c == lower)
                {
                        _putchar('1');
                        break;
                } else
		{
			continue;
		}
        }

        for (upper = 65; upper <= 90; upper++)
        {
                if (c == upper)
                {
                        _putchar('0');
                        break;
                } else
                {
                    continue;
                }
        }

        return (0);
}

