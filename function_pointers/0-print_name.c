#include "function_pointers.h"

/**
 * print_name: prints a string
 * @name: pointer to character
 * @f: pointer to function
 * Description: takes name and calls back
 * the function pointed to by f
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

