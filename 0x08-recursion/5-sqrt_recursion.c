#include "main.h"

int recursive_sqrt(int n, int i);

/**
 * _sqrt_recursion - gives the natural square root of a number
 *
 * @n: number whose natural sqaure root is calculated
 *
 * Return: the natural square root of n else -1 if error encountered
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursive_sqrt(n, 0));
}

/**
 * recursive_sqrt - uses recursion to calculate the natural
 *			square roof of a number
 *
 * @n: number to calculate the square root of
 * @i: counting variable
 *
 * Return: square root of number else -1 if no natural square root
 */

int recursive_sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	return (recursive_sqrt(n, i + 1));
}
