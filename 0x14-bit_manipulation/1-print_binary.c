#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long b_value;
	unsigned long final_value;

	b_value = n;
	if (b_value > 1)
		print_binary(b_value >> 1);
	final_value  = (b_value & 1) + '0';
	_putchar(final_value);
}
