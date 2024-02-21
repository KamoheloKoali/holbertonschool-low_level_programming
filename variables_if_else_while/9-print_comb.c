#include <stdio.h>

/**
 * main - prints all combinations of single digit numbers
 * Return: string
 */

int main(void)
{
	int num;

	for (num = 0; num <= 8; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}

