#include <stdio.h>

/**
 * main - entry point
 * fizz_buzz - print numbers from 1 to 100
 *  Return: exit point
 */

void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if  ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}

