#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to a character
 * @needle: pointer to a character
 * Return: character
 */

char *_strstr(char *haystack, char *needle)
{
	int length;

	while(*haystack)
	{
		for (length = 0; needle[length] != '\0'; length++)
			if (needle[0] ==  *haystack && needle[0 + 1] == *haystack)
				return (haystack);
		haystack++;
	}
	return (NULL);
}

