#include "main.h"

/**
 * print_numbers - print numbers from 1 up to 9
 * @void: no parameter
 * @n: variable for storing numbers
 * @cnum: variable to store integer converted to character
 */

void print_numbers(void)
{
	int n = 0;
	char cnum; 

	for (n = 0; n <= 9; n++)
	{
		cnum = n + '0';
		_putchar(cnum);
	}
	
