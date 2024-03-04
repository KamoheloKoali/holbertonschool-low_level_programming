#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to character
 * @accept: pointer to character
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	int length = 0, length1 = 0;

	while (s[length])
	{
		while (accept[length1])
		{
			if (accept[length1] == s[length])
				return (s + a[length1]);
			length1++;
		}
		length++;
	}
	return (0);
}

