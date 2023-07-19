#include "main.h"

/**
 *times_table - prints the 9 times table from zero.
 */

void times_table(void)
{
	int digit, multiple_, product_;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

		for (multiple_ = 1; multiple_ <= 9; multiple_++)
		{
			_putchar(',');
			_putchar(' ');

			product_ = digit * multiple_;

			if (product_ <= 9)
				_putchar(' ');
			else
				_putchar((product_ / 10) + '0');

			_putchar((product_ % 10) + '0');
		}
		_putchar('\n');
	}
}
