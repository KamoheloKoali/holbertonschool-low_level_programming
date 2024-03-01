#include "main.h"

/**
 * cap_string - capitalize every first leter of a word
 * @str: pointer to string
 * Return: return character
 */

char *cap_string(char *str)
{
	int length = 0, ascii_val, ascii_val1, num;

	while (str[length])
	{
		for (ascii_val = 97; ascii_val < 123; ascii_val++)
		{
			if (str[length] == str[0] && str[length] == ascii_val)
				str[length] = ascii_val - 32;
			else if (str[length] == 92)
				ascii_val += 2;
			for (ascii_val1 = 32; ascii_val1 < 65; ascii_val1++)
			{
				if (str[length] == ascii_val1 && str[length + 1] == ascii_val)
				{
					if (str[length] > 48 && str[length] <= 57)
						continue;
					str[length + 1] = ascii_val - 32;
				} else if (str[length] == ascii_val1 && str[length + 1] == ascii_val1)
				{
					for (num = 1; num < 20; num++)
					{	
						if (str[length + num] == ascii_val)
							str[length + num] = ascii_val - 32;
					}
				}
			}
		}
		length++;
	}
	return (str);
}

