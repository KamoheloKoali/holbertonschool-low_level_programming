#include <stdlib.h>
#include "main.h"

/**
 * get_bit - get bit at specified position
 * @n: number
 * @index: position of wanted bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
