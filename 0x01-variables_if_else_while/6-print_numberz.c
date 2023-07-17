#include <stdio.h>

/**
 * main - prints numbers 0-9 strictly
 * using the putchar function
 *
 * Return: Always (0)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
