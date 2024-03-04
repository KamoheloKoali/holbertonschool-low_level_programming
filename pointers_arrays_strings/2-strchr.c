#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a character
 * @c: variable for parameter
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int length = 0, length1 = 0;
	char **str[100];

	while (s[length])
	{
		if (s[length] == c)
		{
			while (s[length])
			{
				str[length1] = s[length];
				length++;
			}
			return (str);
		}
		length++;
	}
	return (NULL);
}

