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
		if (alphabt == letter || alphabt == letter1)
		{
			alphabt++;
			continue;
		}

		putchar(alphabt);
		alphabt++;
	}
	putchar('\n');
	return (0);
}

