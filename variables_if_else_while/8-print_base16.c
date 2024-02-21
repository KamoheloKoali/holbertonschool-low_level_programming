#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase
 * Return: string
 */

int main(void)
{
	char num = '0';

	if (num <= '9')
	{
		for (num = '0'; num <= '9'; num++)
			putchar(num);
	} else if (num == '9')
	{
		for (num = 'a'; num <= 'f'; num++)
			putchar(num);
	}
	putchar('\n');
	return (0);
}

