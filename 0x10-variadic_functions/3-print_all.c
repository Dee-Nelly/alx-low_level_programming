#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: list of characters to be printed
 */

void print_char(va_list args)
{
	char l;

	l = va_arg(args, int);
	printf("%c", l);
}

/**
 * print_int - prints integers
 * @args: a list of integers to print
 */

void print_int(va_list args)
{
	int inte;

	inte = va_arg(args, int);
	printf("%d", inte);
}

/**
 * print_float - prints a float
 * @args: a list from which to print float
 */

void print_float(va_list args)
{
	float decimal;

	decimal = va_arg(args, double);
	printf("%f", decimal);
}

/**
 * print_string - prints a string
 *@args: a list of arguments from which to print a string
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - variadic function that parses a string
 *		to determine which function to
 *		use to print parts of it according to its format
 *@format: format string to be parsed and printed
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	specifier_t funs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
	
		while (j < 4 && (*(format + i) != *(funs[j].specifier)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funs[j].print_func(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

