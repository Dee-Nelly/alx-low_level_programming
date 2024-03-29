#include "main.h"

/**
 * _pow_recursion - returns the exponential x to y
 *
 * @x: base number
 * @y: power
 *
 * Return: -1 if y is less than 0 else value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
