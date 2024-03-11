#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	} else if (argc == 2)
		printf("%s\n", argv[1]);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) > 32 && atoi(argv[i]) < 48) || (atoi(argv[i]) > 57 && atoi(argv[i]) < 128))
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
}
