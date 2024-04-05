#include <stdlib.h>
#include "main.h"

/**
 * flip_bit - count how many bits need to be flipped in order to convert
 * @n: number to be converted to
 * @m: number
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bit(unsigned long int n, unsigned int m)
{
	unsigned int setBits = n ^ m, count = 0;

	while (setBits != 0)
	{
		count++;
		setBits &= (setBits - 1);
	}
	return (count);
}

