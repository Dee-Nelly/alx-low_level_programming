#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string in comparison
 *
 * Return: 0 if s1 nd s2 the same, value less than 1 if
 *		first char ASCII value of s1 is less than first char value of s2,
 *		value greater than 1 if first char of s1 greater than first char of s2
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = *s1 - *s2;

	while (*s1 && *s2)
	{
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}

	return (0);
}
