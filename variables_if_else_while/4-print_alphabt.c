#include <stdio.h>

/**
 * main - print alphabets without e and q
 * Return: string
 */

int main(void)
{
	char alphabt = 'a';
	char letter = 'e';
	char letter1 = 'q';

	while (alphabt <= 'z')
	{
		putchar(alphabt);
		alphabt++;

		if (alphabt == letter || alphabt == letter1)
			continue;
	}
	putchar('\n');
	return (0);
}

