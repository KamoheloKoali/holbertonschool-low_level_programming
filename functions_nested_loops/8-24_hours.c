#include "main.h"

/**
 * jack_bauer - print the minute of everyday
 * @void: no parameter
 * Return: exit point
 */

void jack_bauer(void)
{
int hours = 0;
int min = 0;

while (hours < 24)
{
while (min < 60)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
min++;
}
min = 0;
hours++;
}
}