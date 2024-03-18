#include "3-calc.h"

/**
 * get_op_func - returns a pointer to a function
 * @s: operator
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	if (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] = '/' && s[0] != '%')
		return (NULL);
	while (ops[i] != NULL)
	{
		ops[i] == s ? return (ops[i].f):continue;
		i++;
	}
	return (0);
}

