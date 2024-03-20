#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints tsrings followed by a new line
 * @separator: pointer to separator of strings
 * @n: number of strings passed as arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	} else
	{
		va_start(args, n);
		for (i = 0; i < n; ++i)
		{
			if (va_arg(args, char *) != NULL)
				printf("%s", va_arg(args, char *));
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	if (va_arg(args, char *) != NULL)
		printf("%s\n", va_arg(args, char *));
	else 
		printf("(nil)\n");
	va_end(args);
}

