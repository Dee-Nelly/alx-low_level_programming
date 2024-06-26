#include "main.h"

/**
 * clear_bit - sets a specific bit to 0 in a number
 * @n: the number in question
 * @index: the position of the bit in n
 * Return: 1 if the bit was set to 0, otherwise 0 upon an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (0);
	*n = *n & ~(1 << index);
	return (1);
}
