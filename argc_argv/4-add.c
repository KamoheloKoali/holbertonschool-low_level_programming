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
	
	for (i = 1, j = 0; i < argc; i++, j++)
	{
		if (argc < 2)
        	{
               		printf("Error\n");
               		return (1);
        	}else if (argc == 2)
               		return (atoi(argv[1]));
		if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') || (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

