#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between integers
 * @n: number of integers passed tas arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0 && separator == NULL)
		return;
	else if (n == 0)
		printf("%s\n", separator);
	va_start(args, n);
	else if (separator == NULL)
		for (i = 0; i < n; i++)
			printf("%d\n", va_args(args, int));
	else
		for (i = 0; i < n; i++)
			printf("%d%s\n", va_args(args, int), separator);
	va_end(args);
}

