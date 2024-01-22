#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: string to be searched
 * @c: character being looked for
 *
 * Return: pointer to first occurrence of @c in @s
 *	and NULL if character @c absent
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
