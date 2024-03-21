#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * chara - prints character
 * @c: pointer to character to be printed
 */

void chara(char c)
{
	printf("%c", c);
}

/**
 * integ - prints integers
 * @n: pointer to integer to be printed
 */

void integ(int n)
{
	printf("%d", n);
}

/**
 * dec - prints float
 * @n: pointer to float to be printed
 */

void dec(float n)
{
	printf("%f", n);
}

/**
 * str - prints string
 * @str: pointer to string to be printed
 */

void str(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints arguments of any data type
 * @format: fata types to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	switch (format)
	{
		case NULL:
			printf("\n");
			return;
		default:
			break;
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
