#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * chara - prints character
 * @c: pointer to character to be printed
 */

void chara(char *c)
{
	_putchar(c);
}

/**
 * integ - prints integers
 * @n: pointer to integer to be printed
 */

void integ(int *n)
{
	printf("%d", n);
}

/**
 * dec - prints float
 * @n: pointer to float to be printed
 */

void dec(float *n)
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
	int i = 0, j = 0;
	void *ptr;
	va_list args;

	va_start(args, format);
	while (*format)
		i++;
	while (format[i - 2])
	{
		switch (format[j])
		{
			case 'c':
				ptr = va_arg(args, char);
				chara(ptr);
				printf(", ");
				break;
			case 'i':
				ptr = va_arg(args, int);
				integ(ptr);
				printf(", ");
				break;
			case 'f':
				ptr = va_arg(args, float);
				dec(ptr);
				printf(", ");
				break;
			case 's':
				ptr = va_arg(args, char *);
				str(ptr);
				printf(", ");
				break;
			default:
				break;
		}
		j++;
	}
	switch (format[i - 1])
	{
		case 'c':
			ptr = va_arg(args, char);
			chara(ptr);
			printf(", ");
			break;
		case 'i':
			ptr = va_arg(args, int);
			integ(ptr);
			printf(", ");
			break;
		case 'f':
			ptr = va_arg(args, float);
			dec(ptr);
			printf(", ");
			break;
		case 's':
			ptr = va_arg(args, char *);
			str(ptr);
			printf(", ");
			break;
		default:
			break;
	}
	printf("\n");
}
