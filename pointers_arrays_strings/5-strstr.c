#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to a character
 * @needle: pointer to a character
 * Return: character
 */

char *_strstr(char *haystack, char *needle)
{
	int length = 0;

	while(*haystack)
	{
		if (needle[length] ==  *haystack)
			return (haystack);
		length++;
		haystack++;
	}
	return (NULL);
}

