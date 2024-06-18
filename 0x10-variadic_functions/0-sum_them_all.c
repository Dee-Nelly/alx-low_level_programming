#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of the variable arguments
 * @...: unspecified number of arguments
 * Return: if n == 0, returns 0. Otherwise returns the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list access;
	unsigned int i;
	unsigned int sum = 0;

	va_start(access, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(access, int);
	}

	va_end(access);
	return (sum);
}
