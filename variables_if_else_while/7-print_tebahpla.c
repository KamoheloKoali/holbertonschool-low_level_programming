#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: return string
 */

int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}

