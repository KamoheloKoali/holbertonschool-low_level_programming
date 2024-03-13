#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * @n: unsigned int variable
 * Return:  character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *str;
        unsigned int i, j, k;

        if (s1 == NULL)
        {
                for (i = 0; s2[i]; i++);
                if (n < i)
                {
                        str = malloc(n + 1);
                        for (i = 0; i < n; i++)
                                str[i] = s2[i];
                         str[n + 1] = '\0';
                        return (str);
                }
                str = malloc(i + 1);
                if (str == NULL)
                        return (NULL);
                for (j = 0; j < i; j++)
                        str[j] = s2[j];
                str[j + 1] = '\0';
                return (str);
        }
        else if (s2 == NULL)
        {
                for (i = 0; s1[i]; i++);
                str = malloc(i + 1);
                if (str == NULL)
                        return (NULL);
                for (j = 0; j < i; j++)
                        str[j] = s1[j];
                str[j + 1] = '\0';
                return (str);
        }
        for (i = 0; s1[i]; i++);
        str = malloc(i + n + 1);
        if (str == NULL)
                return (NULL);
        for (j = 0; j < i; j++)
                str[j] = s1[j];
        for (k = 0; s2[k]; k++);
        if (n >= k)
        {
                for (k = 0; s2[k]; k++, j++)
                        str[j] = s2[k];
                str[j + 1] = '\0';
                return (str);
        }
        for (k = 0; k < n; k++, j++)
                str[j] = s2[k];
        str[j + 1] = '\0';
        return (str);
}

