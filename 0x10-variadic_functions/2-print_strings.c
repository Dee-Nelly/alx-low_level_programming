#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings separated
 * @separator: separates the printed strings
 * @n: count of the string arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strs);
}
