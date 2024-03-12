#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates memory to a copy of a string
 * @str: pointer to character
 * Return: character
 */

char *_strdup(char *str)
{
        char *s;
        int i, length;
        
        if (str == NULL)
                return (NULL);
        for (length = 0; str[length]; length++)
                length++;
        s = malloc(sizeof(char) * (length + 1));
        for (i = 0; str[i]; i++)
                s[i] = str[i];
        s[i] = '\0';
        return (s);
}

