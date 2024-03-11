#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: the number of arguments
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	return (0);
}

