#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always (0)
 */

int main(void)
{
	unsigned long i, a = 1, b = 1, c;

	printf("%lu, ", a);
	for (i = 0; i <  49; i++)
	{
		c = a + b;

		printf("%lu", c);

		b = a;
		a = c;

		if (i == 48)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
