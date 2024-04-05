#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - count how many bits need to be flipped in order to convert
 * @n: number to be converted to
 * @m: number
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int setBits = n ^ m, count = 0;

	while (setBits != 0)
	{
		count++;
		setBits &= (setBits - 1);
	}
	return (count);
}

