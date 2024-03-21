#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints arguments of any data type
 * @format: fata types to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (*format)
	{
		switch (format[i])
		{
			case 'c':
				chara(va_arg(args, int));
				break;
			case 'i':
				integ(va_arg(args, int));
				break;
			case 'f':
				dec(va_arg(args, double));
				break;
			case 's':
				str(va_arg(args, char *));
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
