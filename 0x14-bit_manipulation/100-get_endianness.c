#include "main.h"

/**
 * get_endianness - gets the endianness of a computer system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c == 1);
}
