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
	int i, j, result = 0;

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
			for (j = 0; j < 10; j++)
			{
				if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}

