#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: digit whose last digit is to be determined
 *
 *Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_dig = n % 10;

	if (last_dig < 0)
		last_dig *= -1;
	_putchar('0' + last_dig);
	return (last_dig);
}
