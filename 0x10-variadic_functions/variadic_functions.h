#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 *struct specifier_map - A type defining a printing structure
 * @specifier: A format specifier for a data type.
 * @print_func: A function mapping a character to a function that prints
 *		it according to the format specifier
 */

typedef struct specifier_map
{
	char *specifier;
	void (*print_func)(va_list args);
} specifier_t;

#endif
