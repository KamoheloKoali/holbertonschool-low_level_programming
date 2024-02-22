#include "main.h"

/**
 * main - outputs _putchar
 * _putchar - returns string
 * Return: returns string
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

int main(void)
{
	_putchar('-');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

