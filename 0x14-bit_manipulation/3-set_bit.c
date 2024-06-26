#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: the pointer to the number in question
 * @index: the position of the bit in n we want to set to 1
 * Return: 1 if the bit was set to 1, otherwise 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
