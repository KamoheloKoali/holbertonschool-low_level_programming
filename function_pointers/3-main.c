#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	else if (argv[2][0] != 37 && argv[2][0] != 42 && argv[2][0] != 43 && argv[2][0] != 45 && argv [2][0] != 47)
	{
		printf("Error");
		exit(99);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

