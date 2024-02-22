#include "main.h"

/**
 * main - entry point
 * Return: end point
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
	return;
}

