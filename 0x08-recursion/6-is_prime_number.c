#include "main.h"

int recursive_is_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: input number to be checked
 * Return: 1 if n is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursive_is_prime(n, n - 1));
}

/**
 * recursive_is_prime - recursively checks if a number is a prime number
 *
 * @n: number to be checked
 * @i: counting variable
 * Return: 1 if prime number else 0
 */

int recursive_is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i) == 0 && i > 0)
		return (0);
	return (recursive_is_prime(n, i - 1));
}
