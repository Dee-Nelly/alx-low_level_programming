#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - prints numbers separated by a string
 *@separator: a string separating the numbers
 *@n: a count of numbers to be printed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
