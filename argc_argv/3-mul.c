#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, num = atoi(argv[1]), num1 = atoi(argv[2]);

	if (argc == 1)
	{
		printf("Error");
		return (1);
	}
	sum = argv[1] * argv[2];
	printf("%d\n", sum);
	return (0);
}

