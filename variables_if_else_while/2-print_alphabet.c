#include <stdio.h>

/**
 * main - prints out the 'alphabet' 
 * Return: returns the string 
 */

int main(void)
{
	char letter = 'a';

       	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}

