#include "main.h"

/**
 * factorial - returns the factorial of a nuumber
 *
 * @n: number whose factorial is calculated
 * Return: factorial of @n or -1 if @n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
