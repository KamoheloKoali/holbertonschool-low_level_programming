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
		if (needle[0] ==  *haystack && haystack[length + 1] == needle[length + 1])
			return (haystack);
		length++;
		haystack++;
	}
	return (NULL);
}

