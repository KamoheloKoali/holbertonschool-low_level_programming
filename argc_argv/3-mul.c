#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) *  atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}

