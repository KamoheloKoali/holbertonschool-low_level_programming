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
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
		printf("\n");
	} else
	{
		for (i = 0; i <  (n - 1); i++)
			printf("%d%s", va_arg(args, int), separator);
		printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}

