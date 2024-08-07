#include "main.h"

/**
 *_abs - gives the absolute value of an integer
 *@n: integer for which to compute the absolute value
 *
 *Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
