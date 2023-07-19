#include "main.h"

/**
 *print_times_table - prints n times table starting at zero and
 *			capped at 15.
 *@n: value whose multiplication table is to be printed.
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;

				if (c <= 99)
					_putchar(' ');

				if (c <= 9)
					_putchar(' ');

				if (c >= 100)
				{
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10));
				}
				else if (c >= 10 && c <= 99)
				{
					_putchar('0' + (c / 10));
				}
				_putchar('0' + (c % 10));
			}
		_putchar('\n');
		}
	}
}
