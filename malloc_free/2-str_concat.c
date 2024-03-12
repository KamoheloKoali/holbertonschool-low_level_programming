#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: character
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
        int i, j, k, length, length1;

        if (s1 == NULL)
                return (s2);
        else if (s2 == NULL)
                return (s1);
        else if (s1 == NULL && s2 == NULL)
                return ("");
        else if (s1 == "")
                return (s2);
        else if (s2[0] == "")
                return (s1);
        else if (s1[0] == "" && s2[0] == "")
                return ("");
        for (length = 0; s1[length]; length++)
                length++;
	for (length1 = 0; s2[length1]; length1++)
		length1++;
        s = malloc(sizeof(char) * (length + length1 + 1));
        for (i = 0; s1[i]; i++)
                s[i] = s1[i];
	for (j = i, k = 0; s2[k]; ++j, k++)
	       s[j] = s2[k];	
        s[j] = '\0';
        return (s);
}

