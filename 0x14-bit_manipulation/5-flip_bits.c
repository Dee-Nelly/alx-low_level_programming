#include "main.h"

/**
 * flip_bits - counts how many bits to change to convert one number to another
 * @n: number whose bits are flipped
 * @m: the number that n is converted to
 *
 * Return: the total number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned long int i = 0;

	total = n ^ m;

	while (total != 0)
	{
		if ((total & 1) == 1)
			i++;
		total = total >> 1;
	}

	return (i);
}
