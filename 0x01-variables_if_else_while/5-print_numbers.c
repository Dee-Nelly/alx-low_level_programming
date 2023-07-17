#include <stdio.h>

/**
 *main - prints single digit
 *numbers of base 10 including zero
 *
 *Return: Always (0)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
