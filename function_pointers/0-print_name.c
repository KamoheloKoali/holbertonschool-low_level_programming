#include "function_pointers.h"

/**
 * print_name: prints a string
 * @name: pointer to character
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

