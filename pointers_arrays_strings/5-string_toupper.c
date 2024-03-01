#include "main.h"

/**
 * string_toupper - changes lowercase letter to uppercase
 * @str: pointer to string
 * Return: return character
 */

char *string_toupper(char *str)
{
	int length = 0, ascii_val;

	while (str[length])
	{
		for (ascii_val = 97; ascii_val < 123; ascii_val++)
		{
			if (str[length] == ascii_val)
				str[length] = ascii_val - 32;
		}
		length++;
	}
	return (str);
}

