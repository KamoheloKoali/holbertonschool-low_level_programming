#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - set bit at specified position to 0
 * @n: number
 * @index: position of wanted bit
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

