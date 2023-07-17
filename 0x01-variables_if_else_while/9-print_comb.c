#include <stdio.h>

/**
 * main - prints all posible combinations
 * of two digits.
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
