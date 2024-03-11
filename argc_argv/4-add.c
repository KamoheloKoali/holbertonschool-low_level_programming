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
int i, c, sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (c = 0; argv[i][c] != '\0'; c++)
{
if (!isdigit(argv[i][c]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

