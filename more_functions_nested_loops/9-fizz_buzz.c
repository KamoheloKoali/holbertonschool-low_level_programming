#include <stdio.h>

/**
 * main - entry point
 * fizz_buzz - print numbers from 1 to 100 wwith multiples of 3 or 5 as fizz or buzz and of both 3 and 5 as fizz buzz
 * Return: exit point
 */

void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0)
		{
			if ((num % 3) == 0 && (num % 5) == 0)
				printf("FizzBuzz");
			printf("Fizz");
		}
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}

