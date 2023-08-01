#include "main.h"

/**
 * puts2 - prints only every other character of a string
 * @str: string whose even characters are printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, length;

	length = 0;
	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
