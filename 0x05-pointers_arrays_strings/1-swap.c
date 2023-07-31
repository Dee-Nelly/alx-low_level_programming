#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to first integer to be swapped
 * @b: pointer to second integer to be swapped
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
