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
	char *str, *last_string;

	if (n == 0)
	{
		printf("\n");
		return;
	} else
	{
		va_start(args, n);
		for (i = 0; i < (n - 1); i++)
		{
			str = va_arg(args, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	last_string = va_arg(args, char *);
	if (last_string != NULL)
		printf("%s\n", last_string);
	else
		printf("(nil)\n");
	va_end(args);
}

