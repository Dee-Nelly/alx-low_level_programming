#include "main.h"

/**
 * string_toupper - converts lower case characters to upper case
 * @s: string to be converted to uppercase characters
 *
 * Return: string with uppercase characters
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
