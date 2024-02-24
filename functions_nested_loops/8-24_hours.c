#include "main.h"

/**
 * jack_bauer - print the minute of everyday
 * @void: no parameter
 * Return: exit point
 */

void jack_bauer(void)
{
    char num;
    char num1;
    char num2;
    char num3;

    for (num = '0'; num <= '2'; num++)
    {
        if (num1 == '0' && num2 == '0')
        {
            num = '0';
        }

        for (num1 = '0'; num1 <= '9'; num1++)
        {
            for (num2 = '0'; num2 <= '5'; num2++)
            {
                for (num3 = '0'; num3 <= '9'; num3++)
                {
                    _putchar(num);
                    _putchar(num1);
                    _putchar(':');
                    _putchar(num2);
                    _putchar(num3);
                    _putchar('\n');

                    if (num == '2' && num1 == '3' && num2 == '5' && num3 == '9')
                    {
                        return;
                    }
                }
            }
        }
    }
}
