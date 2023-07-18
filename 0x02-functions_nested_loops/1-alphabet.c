#include "main.h"

/**
 *main - uses _putchar to print the lower
 *	case alphabet.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
