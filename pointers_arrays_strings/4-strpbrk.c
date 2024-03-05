#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to character
 * @accept: pointer to character
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (accept == s)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}

