#include <stdio.h>

/**
 * main - prints out the 'alphabet' 
 * Return: returns the string 
 */

int main(void)
{
	char letter = 'a';

       	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}

