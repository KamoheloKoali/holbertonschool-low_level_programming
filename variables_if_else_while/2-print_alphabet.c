#include <stdio.h>

/**
 * main - prints out the 'alphabet' 
 * Return: returns the string 
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}

