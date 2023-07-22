#include "main.h"

/**
 * print_line - prints a line
 * @n: the length of the line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar(95);
	}
	_putchar('\n');
}
