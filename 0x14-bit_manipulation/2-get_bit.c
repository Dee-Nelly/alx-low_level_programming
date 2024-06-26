#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number in question
 * @index: the position of the bit value we want
 * Return: the value of the bit at the specified index
 *		else -1 upon an encountered error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) * 8) - 1))
		return (-1);

	n = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);
}
