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
	}
	va_start(args, n);
	else
		for (i = 0; i < n; ++i)
		{
			printf("%s", va_arg(args, char *) != NULL ? va_arg(args, char *) : "(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
	printf("%s\n", va_arg(args, char *) != NULL ? va_arg(args, char *) : "(nil)");
	va_end(args);
}

