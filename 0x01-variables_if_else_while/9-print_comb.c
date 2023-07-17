#include <stdio.h>

/**
 * main - prints all posible combinations
 * of two digits.
 *
 * Return: Always (0)
 */

int main(void)
{
	int i = 0;

	for (i = 10; i < 99; i++)
	{
		putchar(i);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
