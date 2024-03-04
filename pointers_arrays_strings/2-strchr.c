#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a character
 * @c: variable for parameter
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int length = 0;
	char str;

	while (s[length])
	{
		if (s[length] == c)
		{
			while (s[length - 1])
			{
				_putchar(s[length]);
				length++;
			}
			length++;
			str = s[length];
			return (str);
		}
		length++;
	}
	return (NULL);
}

