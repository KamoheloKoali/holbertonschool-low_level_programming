#include "main.h"
#include <stdio.h>


/**
 * main - prints number of arguments
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv[argc];

	printf("%d\n", argc - 1);
	return (0);
}

