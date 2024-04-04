#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 1 and 0 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int ans = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		ans <<= 1;
		ans += b[i] - '0';
		i++;
	}
	return (ans);
}
