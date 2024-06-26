#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a number from binary to a decimal
 * @b: a  pointer to a string of 0's and 1's to be converted
 *
 * Return: 0 if the string is not comprised of strictly
 *	0's and 1's or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		decimal = decimal << 1;

		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			decimal = decimal | 1;
		b++;
	}

	return (decimal);
}
