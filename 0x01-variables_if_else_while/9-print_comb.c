#include <stdio.h>

/**
 * main - prints all posible combinations
 * of two digits.
 *
 * Return: Always (0)
 */

int main(void)
{
	int num;

	for (num = 10; num <= 99; num++)
	{
		putchar('0' + num);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
