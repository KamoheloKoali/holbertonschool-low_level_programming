#include "main.h"
#include <stdio.h>


/**
 * main - prints program name
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv[argc];

	if (argc <= 1)
		return (0);

	printf("%d\n", argc - 1);
	return (0);
}

