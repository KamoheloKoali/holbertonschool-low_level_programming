#include "function_pointers.h"

/**
 * print_name: prints a string.
 * @name: pointer to character.
 * @f: A pointer to a function that prints a string.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

