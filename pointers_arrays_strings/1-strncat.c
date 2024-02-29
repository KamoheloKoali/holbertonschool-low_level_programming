#include "main.h"

/**
 * _strncat(char *dest, char *src, int n)
 * @dest: pointer for parameter
 * @src: pointer for paremeter
 * @n: integer variable for parameter
 * Return: exit point
 */

char *_strncat(char *dest, char *src, int n)
{
	 int length = 0, length1 = 0;

	 while (dest[length])
		 length++;
	 if (n > 0)
	 {
	 	while (src[length1])
	 	{
			dest[length] = src[length1];
		 	if (length == n)
			 	break;
		 	length++;
		 	length1++;
	 	}
		length++;
		dest[length] = '\0';
	 }
	 return (dest);
}

