#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: return string
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	return (0);
}

